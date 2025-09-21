@class NSDictionary;

@interface NEAppPushProvider : NEProvider

@property (retain) NSDictionary *providerConfiguration;

- (void)start;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reportIncomingCallWithUserInfo:(id)a0;
- (void)unmatchEthernet;
- (void)handleTimerEvent;
- (void)reportPushToTalkMessageWithUserInfo:(id)a0;
- (void)stopWithReason:(long long)a0 completionHandler:(id /* block */)a1;

@end
