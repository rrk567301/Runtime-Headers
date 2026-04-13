@class NSString;

@interface CalManagedScheduleChangeRequest : CalManagedChangeRequest

@property (retain) NSString *meAddress;
@property (retain) NSString *recipients;
@property (retain) NSString *scheduleData;
@property (retain) NSString *recurrenceID;
@property (retain) NSString *principalUID;
@property int method;

+ (id)insertScheduleChangeRequestWithEvent:(id)a0 method:(int)a1;
+ (id)insertScheduleChangeRequestWithEvent:(id)a0 document:(id)a1;
+ (id)calculateRecipientsForInvitationReply:(id)a0 meAddress:(id)a1 organizer:(id)a2;
+ (id)calculateRecipientsForCancelDocument:(id)a0;
+ (id)calculateRecipientsForScheduleEvent:(id)a0 meAddress:(id)a1 organizer:(id)a2;
+ (id)insertScheduleChangeRequestWithEvent:(id)a0 document:(id)a1 method:(int)a2;

@end
