@interface PhotosUICore.SocialGroupAddPeopleActionPerformer : PXPhotoKitAssetCollectionActionPerformer {
    void /* unknown type, empty encoding */ additionalPeopleToFilter;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ peopleToAdd;
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ mutationActionDelegate;
}

- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (id)initWithActionType:(id)a0 assetCollectionReference:(id)a1 parameters:(id)a2;

@end
