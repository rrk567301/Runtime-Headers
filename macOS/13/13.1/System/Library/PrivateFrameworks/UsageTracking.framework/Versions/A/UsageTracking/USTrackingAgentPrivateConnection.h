@interface USTrackingAgentPrivateConnection : NSObject

+ (id)newConnection;
+ (id)newInterface;
+ (BOOL)connectionHasPrivateEntitlement:(id)a0;
+ (BOOL)connectionHasFamilyControlsEntitlement:(id)a0;

@end
