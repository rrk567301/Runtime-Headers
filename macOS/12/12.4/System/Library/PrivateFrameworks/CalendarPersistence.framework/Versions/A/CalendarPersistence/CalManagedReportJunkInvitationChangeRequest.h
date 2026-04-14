@class NSString;

@interface CalManagedReportJunkInvitationChangeRequest : CalManagedChangeRequest

@property (retain) NSString *invitationURL;
@property (retain) NSString *principalUID;

+ (id)insertReportJunkInvitationChangeRequest:(id)a0 principalUID:(id)a1 inManagedObjectContext:(id)a2;

@end
