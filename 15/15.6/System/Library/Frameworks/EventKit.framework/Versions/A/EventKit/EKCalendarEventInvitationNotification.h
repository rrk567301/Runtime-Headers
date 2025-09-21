@class NSTimeZone, NSString, NSArray, NSDate, EKRecurrenceRule, EKCalendarEventInvitationNotificationAttendee;

@interface EKCalendarEventInvitationNotification : EKCalendarNotification <NSCopying>

@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *startDateForNextOccurrence;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSDate *participationStatusModifiedDate;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) long long participationStatus;
@property (nonatomic) long long status;
@property (nonatomic, getter=isAllDay) char allDay;
@property (retain, nonatomic) EKRecurrenceRule *recurrenceRule;
@property (nonatomic) char timeChanged;
@property (nonatomic) char dateChanged;
@property (nonatomic) char titleChanged;
@property (nonatomic) char locationChanged;
@property (nonatomic) char videoConferenceChanged;
@property (nonatomic) char recurrenceChanged;
@property (nonatomic) char attendeeReplyChanged;
@property (retain, nonatomic) NSArray *attendees;
@property (retain, nonatomic) EKCalendarEventInvitationNotificationAttendee *owner;
@property (readonly, nonatomic) NSString *invitedBy;
@property (nonatomic) char isLocationDecline;
@property (retain, nonatomic) EKCalendarEventInvitationNotificationAttendee *expandedProposedTimeAttendee;
@property (nonatomic) char expanded;
@property (nonatomic) char isForReReply;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithEvent:(id)a0;
- (char)acknowledgeWithEventStore:(id)a0 error:(id *)a1;
- (char)couldBeJunk;
- (id)eventFromEventStore:(id)a0;
- (char)hasRecurrenceRules;
- (char)isInvitation;
- (char)isProposedNewTime;
- (id)nearestProposedTime;
- (char)needsReply;
- (char)proposedStartDateIsInFutureForAttendee:(id)a0;

@end
