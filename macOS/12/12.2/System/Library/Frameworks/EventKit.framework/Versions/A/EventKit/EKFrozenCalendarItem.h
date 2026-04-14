@class NSDate, NSCalendar, NSString, NSURL, NSSet, NSData, NSDictionary, NSManagedObjectID, EKFrozenCalendar, NSTimeZone, NSNumber;
@protocol EKProtocolParticipant, EKProtocolStructuredLocation, EKCalendarProtocol;

@interface EKFrozenCalendarItem : EKFrozenObject <EKOccurrenceProtocol> {
    EKFrozenCalendar *_container;
}

@property (readonly) NSDate *cachedAdjustedStartDate;
@property (readonly) NSDictionary *cachedPreFrozenRelationshipObjects;
@property (readonly) NSCalendar *cachedCalendar;
@property (readonly, nonatomic) NSString *localUID;
@property (readonly, nonatomic) NSString *sharedUID;
@property (readonly, nonatomic) NSString *itemID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *location;
@property (readonly, nonatomic) NSString *notes;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSNumber *priorityNumber;
@property (readonly, nonatomic) NSNumber *sequence;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSSet *alarmSet;
@property (readonly, nonatomic) NSSet *attendeeSet;
@property (readonly, nonatomic) NSSet *attachmentSet;
@property (readonly, nonatomic) BOOL allDay;
@property (readonly, nonatomic) BOOL allowsParticipantStatusModifications;
@property (readonly, nonatomic) id<EKCalendarProtocol> container;
@property (readonly, nonatomic) BOOL hasAttendees;
@property (readonly, nonatomic) BOOL isScheduled;
@property (readonly, retain, nonatomic) id<EKProtocolParticipant> organizer;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, retain, nonatomic) NSDate *recurrenceDateUnadjustedFromUTC;
@property (readonly, nonatomic) NSNumber *calendarItemPermissionNumber;
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
+ (id)propertiesUnavailableForPartialObjects;
+ (id)frozenObjectForObject:(id)a0 createPartialObject:(BOOL)a1 preFrozenRelationshipObjects:(id)a2 forceUpdate:(BOOL)a3;

- (void).cxx_destruct;
- (BOOL)isPropertyUnavailable:(id)a0;
- (id)rawTitle;
- (BOOL)isReminder;
- (BOOL)isEvent;
- (id)_nsCalendar;
- (BOOL)isCalendarOwnerInvitedAttendee;
- (BOOL)isOrganizedByCurrentUser;
- (BOOL)isOrganizedBySomeoneElse;
- (BOOL)isCurrentUserInvitedAttendee;
- (BOOL)isOrganizedBySharedCalendarOwner;
- (id)initWithObject:(id)a0 createPartialObject:(BOOL)a1 preFrozenRelationshipObjects:(id)a2;
- (void)_handlePreFrozenRelationshipObjects:(id)a0 forOccurrence:(id)a1;
- (void)_cacheCalendarDuringInitIfNeeded;

@end
