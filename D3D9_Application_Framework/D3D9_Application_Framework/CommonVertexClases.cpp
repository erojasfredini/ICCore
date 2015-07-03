#include "stdafx.h"

#include "CommonVertexClases.h"

D3DVERTEXELEMENT9 Vertex::VertexElement[] = {	{0,0,D3DDECLTYPE_FLOAT4,D3DDECLMETHOD_DEFAULT ,D3DDECLUSAGE_POSITION,0},
												D3DDECL_END()
											};


D3DVERTEXELEMENT9 VertexColor::VertexElement[] = 
			{	{0,0				,D3DDECLTYPE_FLOAT4,D3DDECLMETHOD_DEFAULT ,D3DDECLUSAGE_POSITION,0},
				{0,sizeof(float)*4	,D3DDECLTYPE_FLOAT4,D3DDECLMETHOD_DEFAULT ,D3DDECLUSAGE_COLOR	,0},
				D3DDECL_END()
			};


D3DVERTEXELEMENT9 VertexTexture::VertexElement[] = 
			{	{0,0				,D3DDECLTYPE_FLOAT4,D3DDECLMETHOD_DEFAULT ,D3DDECLUSAGE_POSITION,0},
			    {0,sizeof(float)*4	,D3DDECLTYPE_FLOAT2,D3DDECLMETHOD_DEFAULT ,D3DDECLUSAGE_TEXCOORD,0},
				D3DDECL_END()
			};


D3DVERTEXELEMENT9 VertexNormal::VertexElement[] = 
			{	{0,0				,D3DDECLTYPE_FLOAT4,D3DDECLMETHOD_DEFAULT ,D3DDECLUSAGE_POSITION,0},
				{0,sizeof(float)*4,D3DDECLTYPE_FLOAT3,D3DDECLMETHOD_DEFAULT ,D3DDECLUSAGE_NORMAL	,0},
				D3DDECL_END()
			};


D3DVERTEXELEMENT9 VertexColorNormal::VertexElement[] = 
			{	{0,0				,D3DDECLTYPE_FLOAT4,D3DDECLMETHOD_DEFAULT ,D3DDECLUSAGE_POSITION,0},
				{0,sizeof(float)*4	,D3DDECLTYPE_FLOAT4,D3DDECLMETHOD_DEFAULT ,D3DDECLUSAGE_COLOR	,0},
				{0,sizeof(float)*8	,D3DDECLTYPE_FLOAT3,D3DDECLMETHOD_DEFAULT ,D3DDECLUSAGE_NORMAL	,0},
				D3DDECL_END()
			};


D3DVERTEXELEMENT9 VertexTextureNormal::VertexElement[] = 
			{	{0,0			  ,D3DDECLTYPE_FLOAT4,D3DDECLMETHOD_DEFAULT ,D3DDECLUSAGE_POSITION,0},
				{0,sizeof(float)*4,D3DDECLTYPE_FLOAT2,D3DDECLMETHOD_DEFAULT ,D3DDECLUSAGE_TEXCOORD,0},
				{0,sizeof(float)*6,D3DDECLTYPE_FLOAT3,D3DDECLMETHOD_DEFAULT ,D3DDECLUSAGE_NORMAL  ,0},
				D3DDECL_END()
			};


D3DVERTEXELEMENT9 VertexTextureNormalSkinned::VertexElement[] = 
			{	{0,0			  ,D3DDECLTYPE_FLOAT4,D3DDECLMETHOD_DEFAULT ,D3DDECLUSAGE_POSITION	  ,0},
				{0,sizeof(float)*4,D3DDECLTYPE_FLOAT2,D3DDECLMETHOD_DEFAULT ,D3DDECLUSAGE_TEXCOORD	  ,0},
				{0,sizeof(float)*6,D3DDECLTYPE_FLOAT3,D3DDECLMETHOD_DEFAULT ,D3DDECLUSAGE_NORMAL	  ,0},
				{0,sizeof(float)*9,D3DDECLTYPE_UBYTE4,D3DDECLMETHOD_DEFAULT	,D3DDECLUSAGE_BLENDINDICES,0},/*NOT SURE OF THIS TYPE*/
				{0,sizeof(float)*9+sizeof(unsigned char)*4,D3DDECLTYPE_FLOAT4,D3DDECLMETHOD_DEFAULT	,D3DDECLUSAGE_BLENDWEIGHT ,0},
				D3DDECL_END()
			};