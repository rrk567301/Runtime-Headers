@interface PhotosUICore.SocialGroupCreateGroupActionPerformer : PXPhotoKitAssetCollectionActionPerformer {
    void /* unknown type, empty encoding */ customTitle;
    void /* unknown type, empty encoding */ keyAssetUUID;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ creationCompletionBlock;
    void /* unknown type, empty encoding */ mutationActionDelegate;
}

- (void).cxx_destruct;
- (void)performBackgroundTask;
- (id)initWithActionType:(id)a0 assetCollectionReference:(id)a1 parameters:(id)a2;

@end
