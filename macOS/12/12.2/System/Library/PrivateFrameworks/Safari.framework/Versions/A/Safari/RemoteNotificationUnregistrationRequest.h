@interface RemoteNotificationUnregistrationRequest : RemoteNotificationCenterRequest {
    id /* block */ _agentDidUnregisterHandler;
}

- (void).cxx_destruct;
- (void)centerDelegateDidFinishRequest:(id)a0;
- (id)initWithWebsiteIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
