#include "../Data/HashMap.h"
#include "../Render/Mesh.h"
#include "../Render/Texture.h"
#include "../Load/Loader.h"


typedef struct AssetBuffer
{
	HashMap* meshMap;
	HashMap* textureMap;
} AssetBuffer;

///
//Internals
extern AssetBuffer* assetBuffer;

///
//Functions

///
//Initializes the Asset MAnager
void AssetManager_Initialize(void);

///
//Frees all resources allocated by the asset manager
//And all data with pointers being held by the asset manager
//You should probably only do this when you're closing the engine.
void AssetManager_Free(void);

///
//Gets the internal asset buffer being managed by the asset manager
//
//Returns:
//	Internal asset buffer of asset manager
AssetBuffer AssetManager_GetAssetBuffer(void);

///
//Loads all of the engines assets into the internal asset buffer
void AssetManager_LoadAssets(void);

///
//Looks up a mesh from the asset manager's internal buffer
//
//Parameters:
//	key: Name of the mesh to lookup
//
//Returns:
//	Pointer to the requested mesh, or NULL if mesh was not found
Mesh* AssetManager_LookupMesh(char* key);

///
//Looks up a texture from he asset manager's internal buffer
//
//Parameters
//	key: The name of the texture to lookup
//
//Returns:
//	Pointer to the requested texture, or NULL if the texture was not found
Texture* AssetManager_LookupTexture(char* key);
