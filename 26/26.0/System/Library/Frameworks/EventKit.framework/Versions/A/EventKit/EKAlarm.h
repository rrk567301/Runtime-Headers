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

+ (id)knownRelationshipSingleValueKeys;
+ (id)knownSingleValueKeysForComparison;
+ (id)knownIdentityKeysForComparison;
+ (Class)frozenClass;
+ (id)knownRelationshipMultiValueKeys;
+ (int)_currentAuthorizationStatus;
+ (BOOL)_processIsAllowedToCreateProcedureAlarms;
+ (id)alarmWithAbsoluteDate:(id)a0;
+ (id)alarmWithRelativeOffset:(double)a0;
+ (BOOL)areLocationsAllowed;
+ (BOOL)areLocationsAllowedWithAuthorizationStatus:(int)a0;
+ (BOOL)areLocationsAvailable;
+ (BOOL)areLocationsCurrentlyEnabled;
+ (double)defaultGeofencedReminderRadius;
+ (id)knownRelationshipWeakKeys;
+ (long long)maxPublicProximity;
+ (id)procedureAlarmWithBookmark:(id)a0;

- (BOOL)_reset;
- (void)setUUID:(id)a0;
- (void)setAcknowledgedDate:(id)a0;
- (void)_setType:(long long)a0;
- (long long)compare:(id)a0;
- (id)init;
- (void)setSnoozedAlarmsSet:(id)a0;
- (id)snoozedAlarmsSet;
- (id)acknowledgedDate;
- (id)description;
- (void)setUrlWrapper:(id)a0;
- (id)urlWrapper;
- (id)semanticIdentifier;
- (void).cxx_destruct;
- (void)_setUrlWrapper:(id)a0;
- (void)_setEmailAddress:(id)a0;
- (void)addSnoozedAlarm:(id)a0;
- (BOOL)defaultAlarm;
- (id)initWithAbsoluteDate:(id)a0;
- (id)initWithRelativeOffset:(double)a0;
- (BOOL)isTopographicallyEqualToAlarm:(id)a0;
- (id)ownerUUID;
- (void)rebaseForDetachment;
- (id)relativeOffsetRaw;
- (void)removeSnoozedAlarm:(id)a0;
- (void)setRelativeOffsetRaw:(id)a0;
- (BOOL)validateWithOwner:(id)a0 error:(id *)a1;

@end
