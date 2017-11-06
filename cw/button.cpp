#include "button.h"

button::button(glm::vec4 d, std::array<texture,3> t, std::array<Color ,3> C, std::function<void()> f) :
	drawableObj(d, t[0], C[0]),
	m_normalTexture(t[0]),
	m_normalColor(C[0]),
	m_hoverTexture(t[1]),
	m_hoverColor(C[1]),
	m_clickTexture(t[2]),
	m_clickColor(C[2]),
	m_function(f)
	{}

button::button(glm::vec4 d, texture t, Color C, std::function<void()> f) :
	drawableObj(d, t, C),
	m_normalTexture(t),
	m_normalColor(C),
	m_hoverTexture(t),
	m_hoverColor(C),
	m_clickTexture(t),
	m_clickColor(C),
	m_function(f)
	{}

void button::doClick() {
	m_function();
}

void button::update(glm::vec2 mouseC, int t) {
	if (pointInBox(m_dims, mouseC)) {
		if (t) {
			if (t == 1) 
				doClick();
			
			m_currentState = state::CLICKED;
			m_texture = m_clickTexture;
			m_color = m_clickColor;
		}else {
			m_currentState = state::HOVER;
			m_texture = m_hoverTexture;
			m_color = m_hoverColor;
		}
	}else {
		m_currentState = state::NORMAL;
		m_texture = m_normalTexture;
		m_color = m_normalColor;
	}
}