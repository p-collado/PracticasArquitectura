﻿#include "CBackground.h"
#include "..\..\common\stdafx.h"
#include "..\..\common\core.h"
#include "CTexture.h"


CBackground::CBackground(const char* filepath, vec2 _size) : Sprite(filepath, true)
{
  pos = vec2(0,0);
	size = _size;
}

void CBackground::draw()
{
	// Render backgground
	for (int i = 0; i <= size.x / 128; i++) {
		for (int j = 0; j <= size.y / 128; j++) {
			CORE_RenderCenteredSprite(vec2(pos.x + (i * 128.f + 64.f), pos.y + (j * 128.f + 64.f)), vec2(128.f, 128.f), getTexture()->getTextureId());
		}
	}
}
