@interface PhotosUICore.SocialGroupModifyGroupActionPerformer : PXPhotoKitAssetCollectionActionPerformer {
    void /* unknown type, empty encoding */ mutationActionDelegate;
    void /* unknown type, empty encoding */ newKeyAsset;
    void /* unknown type, empty encoding */ newCustomTitle;
    void /* unknown type, empty encoding */ customTitleWasDeleted;
    void /* unknown type, empty encoding */ peopleToBeAdded;
    void /* unknown type, empty encoding */ peopleToBeRemoved;
}

- (void).cxx_destruct;
- (void)performBackgroundTask;
- (id)initWithActionType:(id)a0 assetCollectionReference:(id)a1 parameters:(id)a2;

@end
