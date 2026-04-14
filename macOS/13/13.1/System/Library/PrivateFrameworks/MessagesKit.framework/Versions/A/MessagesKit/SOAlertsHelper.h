@interface SOAlertsHelper : SOHelper

+ (id)bundleName;
+ (id)weakSharedInstance;
+ (id)receiverProtocol;
+ (id)remoteReceiverProtocol;

- (void)setValue:(id)a0 forControllerKey:(id)a1;
- (void)clearMessageDeliveryError;

@end
