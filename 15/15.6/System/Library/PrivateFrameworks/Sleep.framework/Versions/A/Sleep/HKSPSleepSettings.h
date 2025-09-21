@class NSSet, NSString, NSDate;
@protocol HKSPSyncAnchor;

@interface HKSPSleepSettings : NSObject <HKSPFeatureSettingsModel, BSDescriptionProviding, HKSPXPCObject, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSCopying, NSMutableCopying>

@property (class, readonly) char supportsSecureCoding;
@property (class, readonly, nonatomic) NSSet *allProperties;
@property (class, readonly, nonatomic) NSSet *propertiesForEquivalence;
@property (class, readonly, nonatomic) NSSet *significantProperties;

@property (readonly, nonatomic) char sleepTrackingFeatureEnabled;
@property (readonly, nonatomic) char springBoardGreetingDisabled;
@property (readonly, nonatomic) char springBoardSuggestedPageCreated;
@property (readonly, nonatomic) char watchSleepFeaturesEnabled;
@property (readonly, nonatomic) char scheduledSleepMode;
@property (readonly, nonatomic) unsigned long long sleepModeOptions;
@property (readonly, nonatomic) char sleepTracking;
@property (readonly, nonatomic) char timeInBedTracking;
@property (readonly, nonatomic) char bedtimeReminders;
@property (readonly, nonatomic) char wakeUpResults;
@property (readonly, nonatomic) char chargingReminders;
@property (readonly, nonatomic) char shareAcrossDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HKSPSyncAnchor> syncAnchor;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;

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
- (char)isEqualToFeatureSettingsModel:(id)a0;
- (id)objectWithSyncAnchor:(id)a0;

@end
