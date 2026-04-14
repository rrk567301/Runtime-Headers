@class PHPhotoLibrary;

@interface PXStoryMemoryFeedConfiguration : PXStoryFeedConfiguration

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)viewControllerTitle;
- (id)initWithSyntheticSectionCount:(long long)a0 numberOfItemsPerSection:(long long)a1 layoutKind:(long long)a2;
- (id)initWithMemoriesInPhotoLibrary:(id)a0 layoutKind:(long long)a1;
- (id)fullFeedViewController;
- (id)copyForFullFeed;
- (id)objectReferenceForDestination:(id)a0;
- (void)handleContentSeen;
- (id)_defaultSpecManagerWithLayoutKind:(long long)a0 extendedTraitCollection:(id)a1;
- (id)_defaultItemLayoutFactory;
- (id)initWithDataSourceManagerPromise:(id /* block */)a0 specManagerPromise:(id /* block */)a1 itemLayoutFactory:(id)a2 layoutKind:(long long)a3 photoLibrary:(id)a4;
- (BOOL)_shouldEmbedContentLayoutForLayoutKind:(long long)a0;
- (id)_syntheticItemLayoutFactory;
- (id)initWithDataSourceManagerPromise:(id /* block */)a0 specManagerPromise:(id /* block */)a1 itemLayoutFactory:(id)a2 layoutKind:(long long)a3;
- (id)_photoKitMediaProviderWithPhotoLibrary:(id)a0;
- (id)_defaultActionPerformer;
- (id)copyWithLayoutKind:(long long)a0;
- (id)initWithMemoriesFeedDataSourceManager:(id)a0 layoutKind:(long long)a1;

@end
