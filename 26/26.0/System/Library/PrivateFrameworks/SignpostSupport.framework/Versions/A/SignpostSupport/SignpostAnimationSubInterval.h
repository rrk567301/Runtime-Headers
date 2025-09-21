@class NSString;

@interface SignpostAnimationSubInterval : NSObject <SignpostSupportTimeInterval>

@property (readonly, nonatomic) double timebaseRatio;
@property (readonly, nonatomic) BOOL isGeneratedInterval;
@property (readonly, nonatomic) unsigned long long startMachContinuousTime;
@property (readonly, nonatomic) unsigned long long endMachContinuousTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)durationMachContinuousTime;
- (float)durationSeconds;
- (BOOL)isEqual:(id)a0;
- (id)initWithInterval:(id)a0;
- (double)durationMs;
- (double)startMs;
- (unsigned long long)durationNanoseconds;
- (double)endMs;
- (unsigned long long)endNanoseconds;
- (double)endSeconds;
- (id)initWithStartMCT:(unsigned long long)a0 endMCT:(unsigned long long)a1 timebaseRatio:(double)a2;
- (unsigned long long)startNanoseconds;
- (double)startSeconds;

@end
