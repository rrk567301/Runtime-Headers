@protocol PXStorySongResource, PXStoryTimeline;

@interface PXStoryResourcesPreloadingRequest : NSObject

@property char isCancelled;
@property (readonly, nonatomic) id<PXStoryTimeline> timeline;
@property (readonly, nonatomic) unsigned long long timelineAttributes;
@property (readonly, nonatomic) long long startingSegmentIdentifier;
@property (readonly, nonatomic) char shouldIgnoreStartingSegmentIdentifier;
@property (retain, nonatomic) id<PXStorySongResource> songResource;

- (void).cxx_destruct;
- (id)initWithTimeline:(id)a0 timelineAttributes:(unsigned long long)a1 startingSegmentIdentifier:(long long)a2 shouldIgnoreStartingSegmentIdentifier:(char)a3;

@end
