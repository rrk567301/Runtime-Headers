@interface ATXAppClipUsageDuetContextUpdateListener : NSObject <ATXAppClipLaunchListenerProtocol>

@property (readonly, nonatomic) id /* block */ appClipUsageHandler;

- (void)startListeningWithClientId:(id)a0;
- (void)startListeningWithCallback:(id /* block */)a0 clientId:(id)a1;
- (void).cxx_destruct;

@end
