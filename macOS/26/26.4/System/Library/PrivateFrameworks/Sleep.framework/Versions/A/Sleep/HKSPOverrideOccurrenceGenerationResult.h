@class NSCalendar, HKSPResolvedSleepScheduleOccurrence, NSDate, HKSPMutableSleepScheduleOccurrence;

@interface HKSPOverrideOccurrenceGenerationResult : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSCalendar *gregorianCalendar;
@property (readonly, copy, nonatomic) HKSPMutableSleepScheduleOccurrence *generatedOccurrence;
@property (readonly, copy, nonatomic) HKSPResolvedSleepScheduleOccurrence *upcomingOccurrence;
@property (readonly, nonatomic) BOOL wasGeneratedFromUpcomingOccurrence;
@property (readonly, nonatomic) BOOL upcomingOccurrenceWasOverride;
@property (readonly, nonatomic) BOOL generatedOccurrenceCouldBeEarlier;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)initWithDate:(id)a0 gregorianCalendar:(id)a1 generatedOccurrence:(id)a2 upcomingOccurrence:(id)a3;

@end
