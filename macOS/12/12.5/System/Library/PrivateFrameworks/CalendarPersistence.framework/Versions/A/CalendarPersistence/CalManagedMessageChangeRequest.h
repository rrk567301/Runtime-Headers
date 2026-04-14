@class NSString;

@interface CalManagedMessageChangeRequest : CalManagedChangeRequest

@property (retain) NSString *principalUID;

+ (id)entityName;
+ (id)insertDeleteInboxChangeRequestForServerFile:(id)a0 principal:(id)a1 inContext:(id)a2;
+ (id)inboxDeletesForPrincipalID:(id)a0 inContext:(id)a1;
+ (id)notificationDeletesForPrincipalID:(id)a0 inContext:(id)a1;
+ (id)_insertChangeRequestForServerFile:(id)a0 type:(int)a1 principalUID:(id)a2 inContext:(id)a3;
+ (id)deletesForPrincipalID:(id)a0 type:(int)a1 inContext:(id)a2;
+ (id)insertDeleteNotificationChangeRequestForServerFile:(id)a0 principal:(id)a1 inContext:(id)a2;

@end
