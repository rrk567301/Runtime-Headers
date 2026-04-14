@class HKSPChangeSet, NSSet, NSDictionary, NSString, NSDate;
@protocol HKSPObject;

@interface HKSPMutableSleepSettings : HKSPSleepSettings <HKSPMutableObject>

@property (class, readonly, nonatomic) NSSet *allProperties;
@property (class, readonly, nonatomic) NSSet *propertiesForEquivalence;
@property (class, readonly, nonatomic) NSSet *significantProperties;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL springBoardGreetingDisabled;
@property (nonatomic) BOOL springBoardSuggestedPageCreated;
@property (nonatomic) BOOL watchSleepFeaturesEnabled;
@property (nonatomic) BOOL scheduledSleepMode;
@property (nonatomic) unsigned long long sleepModeOptions;
@property (nonatomic) BOOL sleepTracking;
@property (nonatomic) BOOL timeInBedTracking;
@property (nonatomic) BOOL bedtimeReminders;
@property (nonatomic) BOOL wakeUpResults;
@property (nonatomic) BOOL chargingReminders;
@property (nonatomic) BOOL shareAcrossDevices;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) HKSPChangeSet *changeSet;
@property (readonly, nonatomic) id<HKSPObject> originalObject;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDictionary *unknownProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)mutableCopy;
- (void)revert;
- (void)freeze;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFromObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
