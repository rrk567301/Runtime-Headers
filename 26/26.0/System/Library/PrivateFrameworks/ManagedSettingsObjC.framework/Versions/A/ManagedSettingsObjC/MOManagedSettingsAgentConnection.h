@interface MOManagedSettingsAgentConnection : NSObject <MOManagedSettingsConnection>

+ (id)newConnection;
+ (id)newInterface;
+ (id)oneTimeConnection;

@end
