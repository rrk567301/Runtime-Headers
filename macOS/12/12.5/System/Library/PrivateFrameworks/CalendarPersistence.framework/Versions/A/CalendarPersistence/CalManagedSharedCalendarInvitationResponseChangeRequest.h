@class NSData, NSString;

@interface CalManagedSharedCalendarInvitationResponseChangeRequest : CalManagedChangeRequest

@property int response;
@property (retain) NSData *invitation;
@property (retain) NSString *calendarHomePath;
@property (retain) NSString *principalUID;

+ (id)insertSharedCalendarInvitationResponse:(int)a0 toInvitation:(id)a1 principalUID:(id)a2 calendarHomePath:(id)a3 inManagedObjectContext:(id)a4;

@end
