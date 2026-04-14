@interface ATXAppClipUsageDuetContextUpdateListener : NSObject <ATXAppClipLaunchListenerProtocol>

@property (readonly, nonatomic) id /* block */ appClipUsageHandler;

- (void)startListeningWithCallback:(id /* block */)a0 clientId:(id)a1;
- (void).cxx_destruct;
- (void)startListeningWithClientId:(id)a0;

@end
