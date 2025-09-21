@class PICompositionController;
@protocol PEAsset, PELivePhotoModelChangeDelegate;

@interface PELivePhotoModel : NSObject <NSCopying>

@property (retain, nonatomic) PICompositionController *compositionController;
@property (nonatomic) unsigned short editingVisibility;
@property (readonly, nonatomic) unsigned short assetVisibility;
@property (readonly, nonatomic) BOOL assetHasAdjustments;
@property (readonly, nonatomic) id<PEAsset> asset;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (readonly, nonatomic) BOOL hasUnsavedChanges;
@property (nonatomic) BOOL ignoresUpdates;
@property (weak, nonatomic) id<PELivePhotoModelChangeDelegate> changeDelegate;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_updateAutoDisableStateIfNeeded;
- (BOOL)_hasLegacyIrisConflicts;
- (void)_setHidden:(BOOL)a0 explicit:(BOOL)a1 supportable:(BOOL)a2;
- (void)compositionDidChange;
- (id)initWithAsset:(id)a0 compositionController:(id)a1;
- (id)initWithLivePhotoVisibilityState:(unsigned short)a0 hasAdjustments:(BOOL)a1 compositionController:(id)a2;
- (void)notifyCannotSupportVideoEdits;
- (BOOL)reenablingLivePhotoShouldRemoveEdits;

@end
