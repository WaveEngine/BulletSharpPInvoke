#include "main.h"

extern "C"
{
	EXPORT btMultimaterialTriangleMeshShape* btMultimaterialTriangleMeshShape_new(btStridingMeshInterface* meshInterface, bool useQuantizedAabbCompression);
	EXPORT btMultimaterialTriangleMeshShape* btMultimaterialTriangleMeshShape_new2(btStridingMeshInterface* meshInterface, bool useQuantizedAabbCompression, bool buildBvh);
	EXPORT btMultimaterialTriangleMeshShape* btMultimaterialTriangleMeshShape_new3(btStridingMeshInterface* meshInterface, bool useQuantizedAabbCompression, const btVector3* bvhAabbMin, const btVector3* bvhAabbMax);
	EXPORT btMultimaterialTriangleMeshShape* btMultimaterialTriangleMeshShape_new4(btStridingMeshInterface* meshInterface, bool useQuantizedAabbCompression, const btVector3* bvhAabbMin, const btVector3* bvhAabbMax, bool buildBvh);
	EXPORT const btMaterial* btMultimaterialTriangleMeshShape_getMaterialProperties(btMultimaterialTriangleMeshShape* obj, int partID, int triIndex);
}
