@class NSCountedSet;

@interface FlexTestingContext : NSObject

@property (nonatomic) char timedOut;
@property (nonatomic) char usingPreventedIntro;
@property (nonatomic) char usingPreventedOutro;
@property (nonatomic) long long maxPassesToFit;
@property (retain, nonatomic) NSCountedSet *removedConflicts;
@property (nonatomic) long long maxSilenceDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxSilenceDurationTime;
@property (nonatomic) long long maxSilenceUnderSetDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxSilenceUnderSetDurationTime;
@property (nonatomic) double maxSilencePercentage;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxSilencePercentageTime;
@property (nonatomic) long long minOutroDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } minOutroDurationTime;
@property (nonatomic) char sequencingLongSong;

- (id)init;
- (void).cxx_destruct;

@end
