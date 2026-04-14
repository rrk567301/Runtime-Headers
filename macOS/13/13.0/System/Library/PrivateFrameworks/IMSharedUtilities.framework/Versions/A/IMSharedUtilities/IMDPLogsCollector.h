@interface IMDPLogsCollector : NSObject

+ (id)sharedInstance;
+ (id)_primaryAccountCountryCode;

- (id)init;
- (BOOL)logPrivatizedUIInteractionEvent:(unsigned long long)a0;
- (BOOL)logPrivatizedImageReceivedEvent:(BOOL)a0;
- (BOOL)logPrivatizedImageSentEvent:(BOOL)a0;

@end
