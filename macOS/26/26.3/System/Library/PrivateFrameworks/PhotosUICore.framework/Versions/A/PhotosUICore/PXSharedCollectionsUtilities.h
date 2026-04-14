@interface PXSharedCollectionsUtilities : NSObject

+ (id)allowedSharingOptionsForSharing;
+ (void)deleteAlbums:(id)a0 completionHandler:(id /* block */)a1;
+ (void)addAssetsTo:(id)a0 assets:(id)a1 comment:(id)a2 completionHandler:(id /* block */)a3;
+ (id)ckShareFromAssetCollection:(id)a0 error:(id *)a1;
+ (void)createAlbumWithName:(id)a0 assets:(id)a1 photoLibrary:(id)a2 completionHandler:(id /* block */)a3;
+ (id)createCKContainerForSharing;
+ (id)createDefaultAssetCreationOptionsForAssets:(id)a0;
+ (id)fetchParticipantsInAssetCollection:(id)a0;
+ (void)fetchSharedCollectionWithShareURL:(id)a0 inPhotoLibrary:(id)a1 acceptIfPending:(BOOL)a2 completionHandler:(id /* block */)a3;
+ (BOOL)isSharedCollectionURL:(id)a0;
+ (id)makeItemProviderFromCKShare:(id)a0;
+ (id)sharedAlbumTitleForAssets:(id)a0 inAssetCollection:(id)a1;

- (id)init;

@end
