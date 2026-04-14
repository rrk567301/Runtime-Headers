@interface HomeAutomationInternal.AutomateHomeIntentHandler : NSObject <AutomateHomeIntentHandling> {
    void /* unknown type, empty encoding */ genericErrorResponse;
    void /* unknown type, empty encoding */ deviceIsSupported;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmAutomateHome:(id)a0 completion:(id /* block */)a1;
- (void)handleAutomateHome:(id)a0 completion:(id /* block */)a1;

@end
