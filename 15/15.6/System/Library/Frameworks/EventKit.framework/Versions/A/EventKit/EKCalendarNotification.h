@class EKSource, NSString, EKCalendar, NSURL, EKEvent, EKObjectID;

@interface EKCalendarNotification : NSObject <EKIdentityProtocol>

@property (nonatomic) long long type;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSString *recipientName;
@property (retain, nonatomic) EKObjectID *objectID;
@property (nonatomic) struct CGColor { } *dotColor;
@property (nonatomic) char hiddenFromNotificationCenter;
@property (nonatomic) char alerted;
@property (readonly, nonatomic) char needsAlert;
@property (readonly, nonatomic) char couldBeJunk;
@property (retain, nonatomic) EKSource *source;
@property (retain, nonatomic) EKCalendar *calendar;
@property (retain, nonatomic) EKEvent *event;
@property (readonly, nonatomic) char isCurrentUserForSharing;
@property (readonly, nonatomic) char isCurrentUserForScheduling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (char)acknowledgeWithEventStore:(id)a0 error:(id *)a1;
- (char)isInvitation;
- (char)isProposedNewTime;
- (char)isSharedCalendarInvitation;
- (char)proposedStartDateIsInFutureForAttendee:(id)a0;

@end
