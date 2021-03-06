// Copyright 2017 Oh-Hyun Kwon. All Rights Reserved.
// Copyright 2018 David Kuhta. All Rights Reserved for additions.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
namespace EIGVEdgeRenderGroup
{
enum Type
{
	Default = 0,
	Highlighted = 1,
	Remained = 2,
	Hidden = 3, //Added
	NumGroups = 4 //Changed from 3
};
}

struct IMSVGRAPHVIS_API FIGVEdgeMeshData
{
	int32 VertexBufferOffset[EIGVEdgeRenderGroup::NumGroups];
	int32 VertexBufferSize[EIGVEdgeRenderGroup::NumGroups];
	int32 IndexBufferOffset[EIGVEdgeRenderGroup::NumGroups];
	int32 IndexBufferSize[EIGVEdgeRenderGroup::NumGroups];

	FIGVEdgeMeshData();
};
