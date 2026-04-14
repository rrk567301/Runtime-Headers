@class NSString, NSURL, NSDate;

@interface EKCalendarEventInvitationNotificationAttendee : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *comment;
@property (readonly, nonatomic) NSDate *proposedStartDate;
@property (readonly, nonatomic) BOOL statusChanged;
@property (readonly, nonatomic) long long participantStatus;
@property (readonly, nonatomic) BOOL commentChanged;
@property (readonly, nonatomic) BOOL proposedStartDateChanged;
@property (readonly, nonatomic) BOOL proposedStartDateDeclined;
@property (readonly, nonatomic) BOOL isCurrentUser;

- (id)initWithParticipant:(id)a0 forEvent:(id)a1;

@end
