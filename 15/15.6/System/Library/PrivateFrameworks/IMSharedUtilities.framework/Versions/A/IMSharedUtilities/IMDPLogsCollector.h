@interface IMDPLogsCollector : NSObject

+ (id)sharedInstance;
+ (id)_primaryAccountCountryCode;

- (id)init;
- (char)logPrivatizedImageReceivedEvent:(char)a0;
- (char)logPrivatizedImageSentEvent:(char)a0;
- (char)logPrivatizedUIInteractionEvent:(unsigned long long)a0;

@end
