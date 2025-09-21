@class PLPhotoLibrary, NSString, NSArray, PLManagedAsset, NSOrderedSet, NSDate, NSIndexSet, NSMutableIndexSet;

@interface PLAvalanche : NSObject <PLAssetContainer, PLAssetChangeObserver>

@property (retain, nonatomic) NSOrderedSet *assets;
@property (retain, nonatomic) NSIndexSet *_originalAutoPickIndexes;
@property (retain, nonatomic) NSMutableIndexSet *_autoPickIndexes;
@property (retain, nonatomic) NSIndexSet *_originalUserFavoriteIndexes;
@property (retain, nonatomic) NSMutableIndexSet *_userFavoriteIndexes;
@property (nonatomic) unsigned long long _originalStackIndex;
@property (nonatomic) unsigned long long _stackIndex;
@property (retain, nonatomic, setter=_setANewPick:) PLManagedAsset *_aNewPick;
@property (retain, nonatomic, setter=_setAnOldPick:) PLManagedAsset *_anOldPick;
@property (copy, nonatomic, setter=_setCompletionHandler:) id /* block */ _completionHandler;
@property (nonatomic) unsigned long long supportedEditOperations;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) long long sourceType;
@property (readonly, retain, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) unsigned long long approximateCount;
@property (readonly, nonatomic) unsigned long long assetsCount;
@property (readonly, nonatomic) unsigned long long photosCount;
@property (readonly, nonatomic) unsigned long long videosCount;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL canShowComments;
@property (readonly, nonatomic) BOOL canShowAvalancheStacks;
@property (readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property (readonly, retain, nonatomic) NSDate *startDate;
@property (readonly, retain, nonatomic) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetsWithAvalancheUUID:(id)a0 sourceType:(long long)a1 inManagedObjectContext:(id)a2;
+ (id)revalidateAvalancheAssets:(id)a0 inLibrary:(id)a1 deleteNonPicks:(BOOL)a2 allowDissolve:(BOOL)a3;
+ (id)_assetAmongAssets:(id)a0 fromIndexes:(id)a1 excludingIndexes:(id)a2;
+ (unsigned long long)_calculateStackAssetForAssetCount:(unsigned long long)a0 autoPicks:(id)a1 userFavorites:(id)a2;
+ (id)_fetchRequestForAssetsWithAvalancheUUID:(id)a0 sourceType:(long long)a1;
+ (unsigned int)_maskForAvalancheSupportedAssetsWithSourceType:(long long)a0;
+ (id)_visibleIndexesAmongAssets:(id)a0 fromUserFavoriteIndexes:(id)a1 stackIndex:(unsigned long long)a2;
+ (unsigned long long)countForAssetsWithAvalancheUUID:(id)a0 sourceType:(long long)a1 inLibrary:(id)a2;
+ (void)disolveBurstForAssets:(id)a0 permanently:(BOOL)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfTopImageInStackForStackFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (void)handleUpdatesForContextWillSave:(id)a0;
+ (BOOL)isValidBurstWithAssets:(id)a0;
+ (void)removeFavoriteStatus:(id)a0;
+ (BOOL)shouldOnlyShowAvalanchePicks;
+ (void)updateMembershipForAssets:(id)a0 autoPicks:(id)a1 stackAsset:(id)a2 userFavorites:(id)a3 deleteNonPicks:(BOOL)a4 allowDissolve:(BOOL)a5 inLibrary:(id)a6;
+ (id)updatePropertiesForAssets:(id)a0 autoPicks:(id)a1 stackAsset:(id)a2 userFavorites:(id)a3 deleteNonPicks:(BOOL)a4 setFirstPick:(BOOL)a5 allowDissolve:(BOOL)a6;

- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (id)initWithUUID:(id)a0 sourceType:(long long)a1 photoLibrary:(id)a2;
- (BOOL)isUserFavorite:(id)a0;
- (void)_recalculateStackAsset;
- (void)addUserFavorite:(id)a0;
- (void)applyChangesAndDeleteNonPicks:(BOOL)a0 currentContainer:(id)a1 completionHandler:(id /* block */)a2;
- (void)applyTrashedState:(short)a0 withTrashedReason:(unsigned short)a1;
- (void)assetsDidChange:(id)a0;
- (id)autoPicks;
- (BOOL)isAutoPick:(id)a0;
- (id)proposedStackAssetAfterRemovingFavorite:(id)a0;
- (void)removeUserFavorite:(id)a0;
- (id)stackAsset;
- (id)userFavorites;

@end
