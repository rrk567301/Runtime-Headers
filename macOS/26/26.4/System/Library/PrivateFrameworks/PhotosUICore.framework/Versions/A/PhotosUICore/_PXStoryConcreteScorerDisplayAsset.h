@class PXStoryResourcesDataSource;
@protocol PXDisplayAsset;

@interface _PXStoryConcreteScorerDisplayAsset : NSObject {
    PXStoryResourcesDataSource *_resourcesDataSource;
    long long _resourceIndex;
    id<PXDisplayAsset> _displayAsset;
}

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (long long)resourceIndex;
- (id)displayAsset;
- (id)resourcesDataSource;
- (void)setResourceIndex:(long long)a0 resourcesDataSource:(id)a1;

@end
