#include "MyVertexformat.h"

DWORD My_LVERTEX::FVF = D3DFVF_XYZ | D3DFVF_DIFFUSE | D3DFVF_SPECULAR | D3DFVF_TEX1;
DWORD My_TLVERTEX::FVF = D3DFVF_XYZRHW | D3DFVF_DIFFUSE | D3DFVF_TEX1;
DWORD My_NLVERTEX::FVF = D3DFVF_XYZ | D3DFVF_DIFFUSE | D3DFVF_TEX1;
DWORD My_NLNTVERTEX::FVF = D3DFVF_XYZ | D3DFVF_DIFFUSE;