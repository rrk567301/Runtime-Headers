@interface RemoteNotificationRegistrationRequest : RemoteNotificationCenterRequest {
    id /* block */ _agentDidRegisterHandler;
}

- (void).cxx_destruct;
- (void)centerDelegateDidFinishRequest:(id)a0;
- (id)initWithWebsiteIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
