@interface PXPeopleChangeTypeActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXPhotoKitPersonActionPerformer>

+ (BOOL)canPerformOn:(id)a0;
+ (long long)changeTypeFor:(id)a0;
+ (id)localizedTitleForPerson:(id)a0;
+ (id)systemImageNameForPerson:(id)a0;

- (void)performBackgroundTask;
- (id)initWithActionType:(id)a0 assetCollectionReference:(id)a1 parameters:(id)a2;

@end
