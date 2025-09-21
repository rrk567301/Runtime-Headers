@class HKSPMutableSleepScheduleOccurrence;

@interface HKSPOverrideOccurrenceGenerationResult : NSObject

@property (retain, nonatomic) HKSPMutableSleepScheduleOccurrence *overrideOccurrence;
@property (nonatomic) char wasGeneratedFromTemplate;
@property (nonatomic) char upcomingOccurrenceWasOverride;

- (void).cxx_destruct;

@end
