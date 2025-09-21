@class NSString, _SSCAMLTimeInterval, NSDate, NSNumber, SSInFlightCAMetalDrawableInterval;

@interface SSCAMetalLayerOnGlassDrawableInterval : NSObject <SignpostJSONRepresentable, SSCAMLTimeInterval>

@property (readonly, nonatomic) _SSCAMLTimeInterval *backingInterval;
@property (readonly, nonatomic) SSInFlightCAMetalDrawableInterval *inFlightDrawableInterval;
@property (readonly, nonatomic) double instantaneousFramesPerSecond;
@property (readonly, nonatomic) NSNumber *drawableID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

- (unsigned long long)durationMachContinuousTime;
- (id)dictionaryRepresentation;
- (float)durationSeconds;
- (unsigned long long)endMachContinuousTime;
- (void).cxx_destruct;
- (unsigned long long)startMachContinuousTime;
- (double)durationMs;
- (id)jsonDescription:(unsigned long long)a0;
- (double)startMs;
- (unsigned long long)durationNanoseconds;
- (double)endMs;
- (unsigned long long)endNanoseconds;
- (double)endSeconds;
- (BOOL)includeTimelines;
- (id)initWithSignpostInterval:(id)a0;
- (unsigned long long)startNanoseconds;
- (double)startSeconds;
- (double)timebaseRatio;

@end
