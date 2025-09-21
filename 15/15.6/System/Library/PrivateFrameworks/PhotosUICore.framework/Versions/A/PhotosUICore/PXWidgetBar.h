@class PXScrollViewController, PXTilingController, NSString, PXWidgetBarSpec, NSMutableSet, NSObject, PXBasicTileAnimator, PXWidgetBarLayout;
@protocol PXWidgetBarDelegate, PXAnonymousView;

@interface PXWidgetBar : NSObject <PXTileSource, PXTilingControllerTransitionDelegate> {
    char _isPerformingChanges;
    char _isPerformingUpdates;
    struct { char view; char viewHeight; char layout; } _needsUpdateFlags;
    struct { char didSelectSubtitle; char didSelectDisclosureAffordance; } _delegateRespondsTo;
}

@property (readonly, nonatomic) PXBasicTileAnimator *_tileAnimator;
@property (readonly, nonatomic) NSMutableSet *_tilesInUse;
@property (nonatomic, setter=_setViewHeight:) double _viewHeight;
@property (readonly, nonatomic) PXWidgetBarLayout *_layout;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *view;
@property (readonly, nonatomic) double viewHeight;
@property (readonly, weak, nonatomic) PXScrollViewController *scrollViewController;
@property (weak, nonatomic) id<PXWidgetBarDelegate> delegate;
@property (readonly, nonatomic) PXTilingController *tilingController;
@property (retain, nonatomic) PXWidgetBarSpec *spec;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSString *disclosureTitle;
@property (nonatomic) char allowUserInteractionWithSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_invalidateLayout;
- (void)updateView;
- (char)_needsUpdate;
- (void)performChanges:(id /* block */)a0;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (id)createView;
- (void)_updateLayoutIfNeeded;
- (void)_updateViewHeightIfNeeded;
- (void)_updateViewIfNeeded;
- (void)checkInTile:(id)a0;
- (void)checkInTile:(void *)a0 withIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a1;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0 layout:(id)a1;
- (id)checkOutTileWithKind:(long long)a0;
- (id)createTileAnimator;
- (void)didSelectDisclosureAffordance;
- (void)didSelectSubtitle;
- (id)initWithScrollViewController:(id)a0;
- (void)invalidateView;
- (void)invalidateViewHeight;
- (id)tilingController:(id)a0 tileIdentifierConverterForChange:(id)a1;

@end
