@class NSString, NSMutableArray;

@interface SignpostAnimationSubInterval : NSObject <SignpostSupportTimeInterval>

@property (readonly, nonatomic) double timebaseRatio;
@property (readonly, nonatomic) NSMutableArray *parentAnimationIntervals;
@property (readonly, nonatomic) unsigned long long startMachContinuousTime;
@property (readonly, nonatomic) unsigned long long endMachContinuousTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (double)durationMs;
- (id)initWithInterval:(id)a0;
- (unsigned long long)durationMachContinuousTime;
- (double)startSeconds;
- (double)endSeconds;
- (float)durationSeconds;
- (unsigned long long)startNanoseconds;
- (unsigned long long)endNanoseconds;
- (unsigned long long)durationNanoseconds;
- (double)startMs;
- (double)endMs;
- (id)initWithStartMCT:(unsigned long long)a0 endMCT:(unsigned long long)a1 timebaseRatio:(double)a2;

@end
