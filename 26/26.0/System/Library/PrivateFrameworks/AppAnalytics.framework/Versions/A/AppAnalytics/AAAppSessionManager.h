@interface AAAppSessionManager : NSObject {
    void /* unknown type, empty encoding */ appSessionManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)startAppSession;
- (void)appSessionDidTerminate;
- (id)createSessionManager;
- (void)endAppSession:(id /* block */)a0;
- (id)initWithTrackingConsent:(id)a0;
- (id)initWithTrackingConsent:(id)a0 userDataConfiguration:(id)a1;
- (void)startAppSessionWithShouldCorrelateSceneSessions:(BOOL)a0;
- (id)userEventsID;

@end
