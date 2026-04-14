@class NSURL;

@interface AVAssetPlannerTrackSegmentState : NSObject

@property (copy) NSURL *segmentURL;
@property struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property BOOL requiresFrameCount;
@property long long frameCount;
@property BOOL hasCompleted;

+ (id)emptyState;
+ (id)fromDictionary:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)description;
- (id)toDictionary;
- (BOOL)resumableBy:(id)a0;

@end
