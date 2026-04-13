@class NSDate, NSString, NSURL, NSData, NSManagedObjectID, NSDictionary, NSTimeZone, NSNumber;
@protocol EKProtocolStructuredLocation, EKProtocolParticipant, CalendarModelProtocol;

@interface EKFrozenReminder : EKFrozenCalendarItem <EKProtocolReminderOccurrence>

@property (readonly) NSDate *cachedAdjustedDueDate;
@property (readonly, nonatomic) NSDate *dueDate;
@property (readonly, copy, nonatomic) NSDate *dueDateUnadjustedFromUTC;
@property (readonly, copy, nonatomic) NSDate *completionDate;
@property (readonly, copy, nonatomic) NSNumber *orderNumber;
@property (readonly, nonatomic) BOOL statusCompleteNotByDate;
@property (readonly, nonatomic) BOOL canEditRecurrence;
@property (readonly, copy, nonatomic) NSURL *action;
@property (readonly, copy, nonatomic) NSData *appLink;
@property (readonly, nonatomic) BOOL cachedHasLocationAlarm;
@property (readonly, retain, nonatomic) NSDate *recurrenceDateUnadjustedFromUTC;
@property (readonly, nonatomic) NSNumber *calendarItemPermissionNumber;
@property (readonly, retain, nonatomic) id<CalendarModelProtocol> container;
@property (readonly, copy, nonatomic) id<EKProtocolStructuredLocation> ekStructuredLocation;
@property (readonly, copy, nonatomic) NSString *recurrenceRuleString;
@property (readonly, nonatomic) BOOL cachedHasAttendee;
@property (readonly, nonatomic) BOOL cachedHasAttachment;
@property (readonly, nonatomic) BOOL cachedHasAlarm;
@property (readonly, nonatomic) BOOL cachedIsCalendarOwnerInvitedAttendee;
@property (readonly, nonatomic) BOOL cachedIsCurrentUserInvitedAttendee;
@property (readonly, copy, nonatomic) id<EKProtocolParticipant> participantForMe;
@property (readonly, copy, nonatomic) NSString *organizerName;
@property (readonly, copy, nonatomic) NSURL *organizerURL;
@property (readonly, copy, nonatomic) NSString *organizerEmail;
@property (readonly, copy, nonatomic) NSString *organizerPhoneNumber;
@property (readonly, copy, nonatomic) NSString *organizerEncodedLikenessData;
@property (readonly, nonatomic) BOOL organizedByMe;
@property (readonly, copy, nonatomic) NSString *scheduleAgentString;
@property (readonly, copy, nonatomic) NSTimeZone *timeZoneObject;
@property (readonly, copy, nonatomic) NSDate *startDateUnadjustedFromUTC;
@property (readonly, nonatomic) BOOL defaultAlarmWasDeleted;
@property (readonly, copy, nonatomic) NSString *recurrenceSetID;
@property (readonly, copy, nonatomic) NSString *contactIdentifiersString;
@property (readonly, copy, nonatomic) NSString *relatedExternalID;
@property (readonly, copy, nonatomic) NSData *structuredData;
@property (readonly, copy, nonatomic) NSData *localStructuredData;
@property (readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property (readonly, nonatomic) BOOL isPartialObject;
@property (readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property (readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)meltedClass;

- (void).cxx_destruct;
- (BOOL)isReminder;
- (id)initWithObject:(id)a0 createPartialObject:(BOOL)a1 preFrozenRelationshipObjects:(id)a2;

@end
