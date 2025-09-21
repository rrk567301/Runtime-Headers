@class NSArray, NSString, NSDate;

@interface SSGameSessionInterval : NSObject <SignpostJSONRepresentable, SSCAMLTimeInterval>

@property (nonatomic) unsigned long long earliestMCT;
@property (nonatomic) unsigned long long latestMCT;
@property (retain, nonatomic) NSDate *earliestDate;
@property (retain, nonatomic) NSDate *latestDate;
@property (readonly, nonatomic) double timebaseRatio;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) unsigned long long startMachContinuousTime;
@property (nonatomic) unsigned long long endMachContinuousTime;
@property (readonly, nonatomic) BOOL includeTimelines;
@property (readonly, nonatomic) BOOL supportsSEM;
@property (readonly, nonatomic) NSArray *triggeringSEMIntervals;
@property (readonly, nonatomic) NSArray *triggeringGameModeIntervals;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)durationMachContinuousTime;
- (id)dictionaryRepresentation;
- (float)durationSeconds;
- (void).cxx_destruct;
- (double)durationMs;
- (id)jsonDescription:(unsigned long long)a0;
- (double)startMs;
- (unsigned long long)durationNanoseconds;
- (double)endMs;
- (unsigned long long)endNanoseconds;
- (double)endSeconds;
- (id)initWithIncludeTimelines:(BOOL)a0 timebaseRatio:(double)a1;
- (unsigned long long)startNanoseconds;
- (double)startSeconds;

@end
