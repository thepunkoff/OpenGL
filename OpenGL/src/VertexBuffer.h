#pragma once

class VertexBuffer
{
private:
	unsigned int m_rendererID; // Former "buffer" variable - buffer ID
public:
	VertexBuffer(const void* data, unsigned int size);
	VertexBuffer();

	void Bind() const;
	void Unbind() const;
};