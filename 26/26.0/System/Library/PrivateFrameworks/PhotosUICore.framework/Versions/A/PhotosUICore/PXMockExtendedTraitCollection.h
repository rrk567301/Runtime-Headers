@class PXUpdater;

@interface PXMockExtendedTraitCollection : PXExtendedTraitCollection <PXMockMutableExtendedTraitCollection> {
    PXUpdater *_updater;
}

@property (nonatomic) long long userInterfaceIdiom;
@property (nonatomic) long long layoutSizeClass;
@property (nonatomic) long long layoutOrientation;
@property (nonatomic) struct CGSize { double width; double height; } layoutReferenceSize;
@property (nonatomic) long long windowOrientation;
@property (nonatomic) double displayScale;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (nonatomic) long long contentSizeCategory;
@property (nonatomic) long long formFactor;
@property (nonatomic) unsigned long long visibleChromeElements;

- (void)_setNeedsUpdate;
- (id)initWithViewController:(id)a0;
- (void)_updateSafeAreaInsets;
- (void)didPerformChanges;
- (void)performChanges:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_invalidateLayoutReferenceSizeAndDisplayScale;
- (void)_invalidateLayoutSizeClass;
- (void)_invalidateSafeAreaInsets;
- (void)_updateLayoutReferenceSizeAndDisplayScale;
- (void)_updateLayoutSizeClass;
- (id)initWithFormFactor:(long long)a0 orientation:(long long)a1 visibleChromeElements:(unsigned long long)a2;
- (id)initWithLayoutSizeClass:(long long)a0;
- (long long)layoutSizeSubclass;
- (void)registerObservations;
- (void)unregisterObservations;

@end
