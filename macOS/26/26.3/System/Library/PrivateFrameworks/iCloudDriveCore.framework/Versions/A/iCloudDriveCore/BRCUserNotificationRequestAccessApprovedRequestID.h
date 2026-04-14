@class NSString;

@interface BRCUserNotificationRequestAccessApprovedRequestID : BRCUserNotificationRequestAccess <LSOpenResourceOperationDelegate, BRCUserNotificationRequestID>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestTypeName;
+ (id)decodeWithRequestIDString:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)iconAppIdentifier;
- (id)encode;
- (id)requestCategory;
- (void)performOnActionWithNotificationResponse:(id)a0 sessionContext:(id)a1 completionHandler:(id /* block */)a2;

@end
