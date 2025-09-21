@class HKSPSleepSettings, HKSPSleepSchedule, NSString, HKSPSleepEventRecord, NSDate;

@interface HKSPSleepScheduleModel : NSObject <NSSecureCoding, NSCopying, NAEquatable, NAHashable>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char goodMorningAlertNotificationEnabled;
@property (readonly, nonatomic) char goodMorningScreenEnabled;
@property (readonly, nonatomic) char chargingRemindersEnabled;
@property (readonly, copy, nonatomic) HKSPSleepSchedule *sleepSchedule;
@property (readonly, copy, nonatomic) HKSPSleepSettings *sleepSettings;
@property (readonly, copy, nonatomic) HKSPSleepEventRecord *sleepEventRecord;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_computeUpcomingDateIntervalForDate:(id)a0;
+ (id)sleepScheduleModelWithSleepSchedule:(id)a0 sleepSettings:(id)a1 sleepEventRecord:(id)a2;
+ (id)templateModelForSchedule:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (char)isEquivalentTo:(id)a0;
- (id)_computeOriginalWakeUpForOverrideDateHelper:(id)a0;
- (id)_timelineResultsDueAfterDate:(id)a0;
- (id)_upcomingEventsDueAfterDate:(id)a0 searchBackwards:(char)a1;
- (id)_upcomingResolvedOccurrencesDueAfterDate:(id)a0 searchBackwards:(char)a1;
- (long long)alarmStatusForOccurrence:(id)a0;
- (char)chargingRemindersEnabledWithLogObject:(id)a0;
- (id)closestEventWithIdentifier:(id)a0 dueAroundDate:(id)a1;
- (id)computeConfirmedWakeUpUntilDateForEarlyWakeUpDate:(id)a0;
- (id)computeConfirmedWakeUpUntilDateForOverrideWakeUpDate:(id)a0;
- (id)computeTemplateGenerationDateForCurrentDate:(id)a0;
- (id)generateOverrideOccurrenceForCurrentDate:(id)a0 gregorianCalendar:(id)a1;
- (id)generateOverrideOccurrenceForCurrentDate:(id)a0 gregorianCalendar:(id)a1 schedule:(id)a2;
- (id)generateOverrideOccurrenceFromTemplateForCurrentDate:(id)a0;
- (id)generateOverrideOccurrenceFromTemplateForCurrentDate:(id)a0 gregorianCalendar:(id)a1;
- (id)generateOverrideOccurrenceFromTemplateForCurrentDate:(id)a0 gregorianCalendar:(id)a1 mutableOccurrence:(id)a2;
- (id)generateOverrideOccurrenceFromTemplateForCurrentDate:(id)a0 gregorianCalendar:(id)a1 schedule:(id)a2;
- (char)goodMorningAlertNotificationsEnabledWithLogObject:(id)a0;
- (char)goodMorningScreenEnabledWithLogObject:(id)a0;
- (id)modelByApplyingChangesFromOccurrence:(id)a0;
- (id)nextEventDueAfterDate:(id)a0;
- (id)nextEventWithIdentifier:(id)a0 dueAfterDate:(id)a1;
- (id)nextOccurrenceAfterDate:(id)a0;
- (id)nextOccurrenceInInterval:(id)a0;
- (id)nextResolvedOccurrenceAfterDate:(id)a0;
- (id)nextResolvedOccurrenceInInterval:(id)a0;
- (id)overrideOccurrenceGenerationResultForCurrentDate:(id)a0 gregorianCalendar:(id)a1 schedule:(id)a2;
- (id)previousEventWithIdentifier:(id)a0 dueBeforeDate:(id)a1;
- (id)previousEventsDueBeforeDate:(id)a0;
- (id)previousOccurrenceBeforeDate:(id)a0;
- (id)previousResolvedOccurrenceBeforeDate:(id)a0;
- (id)timelineForDate:(id)a0;
- (id)upcomingEventsDueAfterDate:(id)a0;
- (id)upcomingOccurrenceAfterDate:(id)a0;
- (id)upcomingResolvedOccurrenceAfterDate:(id)a0;

@end
