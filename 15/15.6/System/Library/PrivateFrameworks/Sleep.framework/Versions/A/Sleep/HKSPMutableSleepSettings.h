@class HKSPChangeSet, NSSet, NSString, NSDate;
@protocol HKSPObject;

@interface HKSPMutableSleepSettings : HKSPSleepSettings <HKSPMutableObject>

@property (class, readonly, nonatomic) NSSet *allProperties;
@property (class, readonly, nonatomic) NSSet *propertiesForEquivalence;
@property (class, readonly, nonatomic) NSSet *significantProperties;
@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char springBoardGreetingDisabled;
@property (nonatomic) char springBoardSuggestedPageCreated;
@property (nonatomic) char watchSleepFeaturesEnabled;
@property (nonatomic) char scheduledSleepMode;
@property (nonatomic) unsigned long long sleepModeOptions;
@property (nonatomic) char sleepTracking;
@property (nonatomic) char timeInBedTracking;
@property (nonatomic) char bedtimeReminders;
@property (nonatomic) char wakeUpResults;
@property (nonatomic) char chargingReminders;
@property (nonatomic) char shareAcrossDevices;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) HKSPChangeSet *changeSet;
@property (readonly, nonatomic) id<HKSPObject> originalObject;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopy;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)freeze;
- (void)revert;
- (id)initFromObject:(id)a0;

@end
