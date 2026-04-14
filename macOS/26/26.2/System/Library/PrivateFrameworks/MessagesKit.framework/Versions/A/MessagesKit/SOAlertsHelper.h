@interface SOAlertsHelper : SOHelper

+ (id)weakSharedInstance;
+ (id)bundleName;
+ (id)receiverProtocol;
+ (id)remoteReceiverProtocol;

- (void)clearMessageDeliveryError;
- (void)setValue:(id)a0 forControllerKey:(id)a1;

@end
