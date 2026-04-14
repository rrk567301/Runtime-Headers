@protocol PXStoryTimelineSpec;

@interface PXStoryTimelineSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) id<PXStoryTimelineSpec> timelineSpec;

- (unsigned long long)defaultChangesToUpdateFor;
- (Class)specClass;

@end
