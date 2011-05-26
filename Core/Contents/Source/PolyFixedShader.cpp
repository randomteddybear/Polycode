/*
 Copyright (C) 2011 by Ivan Safrin
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
*/

#include "PolyFixedShader.h"

using namespace Polycode;

FixedShaderBinding::FixedShaderBinding(FixedShader *shader) : ShaderBinding(shader) {
	fixedShader = shader;
}

FixedShaderBinding::~FixedShaderBinding() {

}


void FixedShaderBinding::addCubemap(String name, Cubemap *cubemap) {
	cubemaps.push_back(cubemap);
}

void FixedShaderBinding::addTexture(String name, Texture *texture) {
	textures.push_back(texture);
}

Texture *FixedShaderBinding::getDiffuseTexture() {
	return textures[0];
}

void FixedShaderBinding::addParam(String type, String name, String value) {

}


FixedShader::FixedShader() : Shader(Shader::FIXED_SHADER) {
}

FixedShader::~FixedShader() {
}

ShaderBinding *FixedShader::createBinding() {
	return new FixedShaderBinding(this);
}