@interface MOManagedSettingsAgentConnection : NSObject <MOManagedSettingsConnection>

+ (id)newInterface;
+ (id)newConnection;
+ (id)oneTimeConnection;

@end
