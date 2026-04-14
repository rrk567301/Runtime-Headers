@class NSData, NSString, NSArray, NSDate, NSURL, EKObject, EKStructuredLocation, EKCalendarItem, NSDictionary, NSManagedObjectID, EKCalendar;

@interface EKAlarm : EKObject <EKProtocolMutableAlarm, NSCopying>

@property (readonly, nonatomic) BOOL isAbsolute;
@property (nonatomic) BOOL isSnoozed;
@property (nonatomic, getter=isDefaultAlarm) BOOL defaultAlarm;
@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSString *externalID;
@property (readonly, nonatomic) EKObject *owner;
@property (readonly, nonatomic) EKCalendar *calendarOwner;
@property (readonly, nonatomic) EKCalendarItem *calendarItemOwner;
@property (retain, nonatomic) EKAlarm *originalAlarm;
@property (copy, nonatomic) NSArray *snoozedAlarms;
@property (copy, nonatomic) NSData *bookmark;
@property (nonatomic) double relativeOffset;
@property (copy, nonatomic) NSDate *absoluteDate;
@property (copy, nonatomic) EKStructuredLocation *structuredLocation;
@property (nonatomic) long long proximity;
@property (readonly, nonatomic) long long type;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *soundName;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSDate *acknowledgedDate;
@property (copy, nonatomic) NSString *actionString;
@property (copy, nonatomic) NSString *proximityString;
@property (nonatomic) BOOL notRelativeToTravelTime;
@property (nonatomic) BOOL isTimeToLeaveAlarm;
@property (readonly, nonatomic) NSString *sharedUID;
@property (readonly, nonatomic) BOOL isDefault;
@property (readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property (readonly, nonatomic) BOOL isPartialObject;
@property (readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property (readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alarm;
+ (Class)frozenClass;
+ (id)knownImmutableKeys;
+ (id)uniqueIdentifierForObject:(id)a0;
+ (id)knownIdentityKeys;
+ (id)knownRelationshipSingleValueKeys;
+ (id)knownSingleValueKeys;
+ (id)alarmWithAbsoluteDate:(id)a0;
+ (id)alarmWithRelativeOffset:(double)a0;
+ (int)_currentAuthorizationStatus;
+ (BOOL)areLocationsAllowedWithAuthorizationStatus:(int)a0;
+ (BOOL)areLocationsAvailable;
+ (id)alarmWithAlarm:(id)a0;
+ (id)alarmWithDefaultAlarm:(id)a0;
+ (id)procedureAlarmWithBookmark:(id)a0;
+ (id)noneTriggerDate;
+ (BOOL)areLocationsAllowed;
+ (BOOL)areLocationsCurrentlyEnabled;
+ (double)defaultGeofencedReminderRadius;
+ (long long)maxPublicProximity;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (void)setType:(long long)a0;
- (BOOL)_reset;
- (id)initWithObject:(id)a0 createPartialBackingObject:(BOOL)a1 keepBackingObject:(BOOL)a2 preFrozenRelationshipObjects:(id)a3 additionalFrozenProperties:(id)a4;
- (BOOL)shouldIncludeInNormalAlarms;
- (id)_keysToChangeForDuplicateWithOptions:(long long)a0;
- (id)initWithRelativeOffset:(double)a0;
- (BOOL)isVehicleAlarm;
- (id)backingAlarm;
- (BOOL)triggerIsNotRelativeToTravelTime;
- (void)setTriggerIsNotRelativeToTravelTime:(BOOL)a0;
- (id)initWithAbsoluteDate:(id)a0;
- (id)ownerUUID;
- (void)setCalendarOwner:(id)a0;
- (void)setCalendarItemOwner:(id)a0;
- (BOOL)isTopographicallyEqualToAlarm:(id)a0;

@end
