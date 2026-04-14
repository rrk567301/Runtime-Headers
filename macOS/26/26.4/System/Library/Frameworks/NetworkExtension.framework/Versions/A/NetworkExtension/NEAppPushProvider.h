@class NSDictionary;

@interface NEAppPushProvider : NEProvider

@property (retain) NSDictionary *providerConfiguration;

- (void)startWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (void)reportIncomingCallWithUserInfo:(id)a0;
- (void)unmatchEthernet;
- (void)handleTimerEvent;
- (void)reportPushToTalkMessageWithUserInfo:(id)a0;
- (void)stopWithReason:(long long)a0 completionHandler:(id /* block */)a1;

@end
