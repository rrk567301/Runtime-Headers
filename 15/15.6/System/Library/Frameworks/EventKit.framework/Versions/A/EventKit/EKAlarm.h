@class NSData, NSString, NSArray, NSURL, NSDate, EKObject, EKStructuredLocation, EKCalendarItem, EKCalendar;

@interface EKAlarm : EKObject <NSCopying>

@property (nonatomic) long long type;
@property (readonly, nonatomic) char isAbsolute;
@property (nonatomic) char isSnoozed;
@property (nonatomic, getter=isDefaultAlarm) char defaultAlarm;
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

+ (id)knownRelationshipMultiValueKeys;
+ (int)_currentAuthorizationStatus;
+ (char)_processIsAllowedToCreateProcedureAlarms;
+ (id)alarmWithAbsoluteDate:(id)a0;
+ (id)alarmWithRelativeOffset:(double)a0;
+ (char)areLocationsAllowed;
+ (char)areLocationsAllowedWithAuthorizationStatus:(int)a0;
+ (char)areLocationsAvailable;
+ (char)areLocationsCurrentlyEnabled;
+ (double)defaultGeofencedReminderRadius;
+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;
+ (id)knownRelationshipSingleValueKeys;
+ (id)knownRelationshipWeakKeys;
+ (id)knownSingleValueKeysForComparison;
+ (long long)maxPublicProximity;
+ (id)procedureAlarmWithBookmark:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (char)_reset;
- (void)setUrlWrapper:(id)a0;
- (id)urlWrapper;
- (void)setUUID:(id)a0;
- (void)_setType:(long long)a0;
- (id)acknowledgedDate;
- (void)setAcknowledgedDate:(id)a0;
- (void)_setUrlWrapper:(id)a0;
- (void)_setEmailAddress:(id)a0;
- (void)addSnoozedAlarm:(id)a0;
- (char)defaultAlarm;
- (id)initWithAbsoluteDate:(id)a0;
- (id)initWithRelativeOffset:(double)a0;
- (char)isTopographicallyEqualToAlarm:(id)a0;
- (id)ownerUUID;
- (void)rebaseForDetachment;
- (id)relativeOffsetRaw;
- (void)removeSnoozedAlarm:(id)a0;
- (id)semanticIdentifier;
- (void)setRelativeOffsetRaw:(id)a0;
- (void)setSnoozedAlarmsSet:(id)a0;
- (id)snoozedAlarmsSet;
- (char)validateWithOwner:(id)a0 error:(id *)a1;

@end
