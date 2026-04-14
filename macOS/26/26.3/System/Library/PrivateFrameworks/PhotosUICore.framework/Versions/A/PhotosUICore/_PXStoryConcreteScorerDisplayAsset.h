@class PXStoryResourcesDataSource;
@protocol PXDisplayAsset;

@interface _PXStoryConcreteScorerDisplayAsset : NSObject {
    PXStoryResourcesDataSource *_resourcesDataSource;
    long long _resourceIndex;
    id<PXDisplayAsset> _displayAsset;
}

- (id)forwardingTargetForSelector:(SEL)a0;
- (long long)resourceIndex;
- (void).cxx_destruct;
- (id)displayAsset;
- (id)resourcesDataSource;
- (void)setResourceIndex:(long long)a0 resourcesDataSource:(id)a1;

@end
