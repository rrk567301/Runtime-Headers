@class NSString;

@interface BRCUserNotificationRequestAccessApprovedRequestID : BRCUserNotificationRequestAccess <LSOpenResourceOperationDelegate, BRCUserNotificationRequestID>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestTypeName;
+ (id)decodeWithRequestIDString:(id)a0;

@end
