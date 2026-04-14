@class PXUpdater, NSString, PXExtendedTraitCollection;

@interface PXTripsFeedViewLayoutSpecManager : PXFeedViewLayoutSpecManager <PXChangeObserver>

@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTraitCollection:(id)a0;
- (void)_setNeedsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)didPerformChanges;
- (void)_invalidateSpec;
- (void)_updateSpec;

@end
