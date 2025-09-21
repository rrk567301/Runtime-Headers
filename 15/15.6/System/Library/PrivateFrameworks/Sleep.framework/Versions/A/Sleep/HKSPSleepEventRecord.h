@class NSSet, NSString, NSDate;
@protocol HKSPSyncAnchor;

@interface HKSPSleepEventRecord : NSObject <HKSPOnboardingModel, BSDescriptionProviding, HKSPXPCObject, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSCopying, NSMutableCopying>

@property (class, readonly) char supportsSecureCoding;
@property (class, readonly, nonatomic) NSSet *allProperties;
@property (class, readonly, nonatomic) NSSet *propertiesForEquivalence;
@property (class, readonly, nonatomic) NSSet *significantProperties;

@property (readonly, nonatomic) char isCurrentSleepCoachingOnboardingCompleted;
@property (readonly, nonatomic) char isCurrentSleepTrackingOnboardingCompleted;
@property (readonly, nonatomic) char isCurrentSleepWindDownShortcutsOnboardingCompleted;
@property (readonly, nonatomic) long long sleepCoachingOnboardingCompletedVersion;
@property (readonly, nonatomic) long long sleepTrackingOnboardingCompletedVersion;
@property (readonly, nonatomic) long long sleepWindDownShortcutsOnboardingCompletedVersion;
@property (readonly, nonatomic) NSDate *sleepCoachingOnboardingFirstCompletedDate;
@property (readonly, nonatomic) NSDate *sleepTrackingOnboardingFirstCompletedDate;
@property (readonly, nonatomic) NSDate *sleepWindDownShortcutsOnboardingFirstCompletedDate;
@property (readonly, nonatomic) long long sleepCoachingOnboardingCompletedVersion;
@property (readonly, copy, nonatomic) NSDate *sleepCoachingOnboardingFirstCompletedDate;
@property (readonly, nonatomic) long long sleepTrackingOnboardingCompletedVersion;
@property (readonly, copy, nonatomic) NSDate *sleepTrackingOnboardingFirstCompletedDate;
@property (readonly, nonatomic) long long sleepWindDownShortcutsOnboardingCompletedVersion;
@property (readonly, copy, nonatomic) NSDate *sleepWindDownShortcutsOnboardingFirstCompletedDate;
@property (readonly, nonatomic, getter=isConsolidatedSleepCoachingOnboardingCompleted) char consolidatedSleepCoachingOnboardingCompleted;
@property (readonly, nonatomic, getter=isConsolidatedSleepTrackingOnboardingCompleted) char consolidatedSleepTrackingOnboardingCompleted;
@property (readonly, nonatomic, getter=isCurrentSleepCoachingOnboardingCompleted) char currentSleepCoachingOnboardingCompleted;
@property (readonly, nonatomic, getter=isCurrentSleepTrackingOnboardingCompleted) char currentSleepTrackingOnboardingCompleted;
@property (readonly, nonatomic, getter=isCurrentSleepWindDownShortcutsOnboardingCompleted) char currentSleepWindDownShortcutsOnboardingCompleted;
@property (readonly, nonatomic, getter=isAnySleepTrackingOnboardingCompleted) char anySleepTrackingOnboardingCompleted;
@property (readonly, nonatomic, getter=isAnySleepCoachingOnboardingCompleted) char anySleepCoachingOnboardingCompleted;
@property (readonly, nonatomic, getter=isAnySleepWindDownShortcutsOnboardingCompleted) char anySleepWindDownShortcutsOnboardingCompleted;
@property (readonly, copy, nonatomic) NSDate *wakeUpEarlyNotificationConfirmedDate;
@property (readonly, copy, nonatomic) NSDate *wakeUpAlarmDismissedDate;
@property (readonly, copy, nonatomic) NSDate *wakeUpOverriddenDate;
@property (readonly, copy, nonatomic) NSDate *wakeUpConfirmedUntilDate;
@property (readonly, copy, nonatomic) NSDate *wakeUpAlarmSnoozedUntilDate;
@property (readonly, copy, nonatomic) NSDate *goodMorningDismissedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HKSPSyncAnchor> syncAnchor;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;

+ (void)_appendDateDescriptionIfRelevant:(id)a0 withName:(id)a1 toBuilder:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (char)isEquivalentTo:(id)a0;
- (id)initFromObject:(id)a0;
- (void)_migrateForCoder:(id)a0;
- (char)_needsMigrationForCoder:(id)a0;
- (char)isEqualToOnboardingModel:(id)a0;
- (id)objectWithSyncAnchor:(id)a0;
- (id)secondsSinceAlarmDismissalFromDate:(id)a0;

@end
