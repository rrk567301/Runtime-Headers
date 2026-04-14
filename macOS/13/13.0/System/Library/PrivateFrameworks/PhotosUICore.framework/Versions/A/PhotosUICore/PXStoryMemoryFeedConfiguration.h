@class PHPhotoLibrary;

@interface PXStoryMemoryFeedConfiguration : PXFeedConfiguration

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

+ (void)_handleContentSeenForDataSource:(id)a0;
+ (id)_photoKitMediaProviderWithPhotoLibrary:(id)a0;

- (void).cxx_destruct;
- (id)viewControllerTitle;
- (BOOL)wantsEmbeddedScrollView;
- (unsigned long long)gadgetType;
- (BOOL)allowsPopOnEmptyBehavior;
- (id)createSeeAllViewController;
- (long long)horizontalGadgetStyle;
- (id)gadgetLocalizedTitle;
- (BOOL)wantsMultilineGadgetTitle;
- (unsigned long long)gadgetAccessoryButtonType;
- (id)gadgetAccessoryButtonLocalizedTitle;
- (id)objectReferenceForDestination:(id)a0;
- (void)handleContentSeen;
- (id)initWithMemoriesInPhotoLibrary:(id)a0 layoutKind:(long long)a1 viewControllerSetupBlock:(id /* block */)a2;
- (id)initWithSyntheticSectionCount:(long long)a0 numberOfItemsPerSection:(long long)a1 layoutKind:(long long)a2;
- (id)initWithDataSourceManagerPromise:(id /* block */)a0 layoutKind:(long long)a1 photoLibrary:(id)a2 viewControllerSetupBlock:(id /* block */)a3;
- (id)copyForFullFeed;
- (id)copyWithLayoutKind:(long long)a0;
- (id)_defaultSpecManagerWithLayoutKind:(long long)a0 extendedTraitCollection:(id)a1;
- (BOOL)_shouldEmbedContentLayoutForLayoutKind:(long long)a0;

@end
