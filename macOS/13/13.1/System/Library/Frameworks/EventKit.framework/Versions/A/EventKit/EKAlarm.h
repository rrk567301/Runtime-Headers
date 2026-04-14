@class NSData, NSString, NSArray, NSURL, NSDate, EKObject, EKStructuredLocation, EKCalendarItem, EKCalendar;

@interface EKAlarm : EKObject <NSCopying>

@property (nonatomic) long long type;
@property (readonly, nonatomic) BOOL isAbsolute;
@property (nonatomic) BOOL isSnoozed;
@property (nonatomic, getter=isDefaultAlarm) BOOL defaultAlarm;
@property (readonly, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSString *externalID;
@property (readonly, nonatomic) EKObject *owner;
@property (readonly, nonatomic) EKCalendar *calendarOwner;
@property (readonly, nonatomic) EKCalendarItem *calendarItemOwner;
@property (retain, nonatomic) EKAlarm *originalAlarm;
@property (copy, nonatomic) NSArray *snoozedAlarms;
@property (retain, nonatomic) NSURL *bookmarkURL;
@property (copy, nonatomic) NSData *bookmark;
@property (nonatomic) double relativeOffset;
@property (copy, nonatomic) NSDate *absoluteDate;
@property (copy, nonatomic) EKStructuredLocation *structuredLocation;
@property (nonatomic) long long proximity;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *soundName;
@property (copy, nonatomic) NSURL *url;

+ (id)knownSingleValueKeysForComparison;
+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;
+ (id)knownRelationshipSingleValueKeys;
+ (id)knownRelationshipMultiValueKeys;
+ (id)knownRelationshipWeakKeys;
+ (id)alarmWithAbsoluteDate:(id)a0;
+ (id)alarmWithRelativeOffset:(double)a0;
+ (long long)maxPublicProximity;
+ (id)procedureAlarmWithBookmark:(id)a0;
+ (BOOL)areLocationsAvailable;
+ (int)_currentAuthorizationStatus;
+ (BOOL)areLocationsAllowed;
+ (BOOL)areLocationsAllowedWithAuthorizationStatus:(int)a0;
+ (BOOL)areLocationsCurrentlyEnabled;
+ (double)defaultGeofencedReminderRadius;

- (id)description;
- (id)init;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)_reset;
- (id)urlWrapper;
- (void)setUrlWrapper:(id)a0;
- (void)setUUID:(id)a0;
- (void)_setType:(long long)a0;
- (void)setAcknowledgedDate:(id)a0;
- (id)acknowledgedDate;
- (void)setSnoozedAlarmsSet:(id)a0;
- (id)snoozedAlarmsSet;
- (BOOL)validateWithOwner:(id)a0 error:(id *)a1;
- (id)initWithAbsoluteDate:(id)a0;
- (id)initWithRelativeOffset:(double)a0;
- (void)rebaseForDetachment;
- (id)relativeOffsetRaw;
- (void)setRelativeOffsetRaw:(id)a0;
- (id)ownerUUID;
- (BOOL)defaultAlarm;
- (void)addSnoozedAlarm:(id)a0;
- (void)removeSnoozedAlarm:(id)a0;
- (void)_setEmailAddress:(id)a0;
- (void)_setUrlWrapper:(id)a0;
- (BOOL)isTopographicallyEqualToAlarm:(id)a0;

@end
