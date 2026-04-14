@class NSString;

@interface ADNotificationLoggingEventConsumer : NSObject <ADNotificationHandler>

@property (retain, nonatomic) NSString *topic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleEvent:(id)a0;

@end
