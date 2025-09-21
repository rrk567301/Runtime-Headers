@interface AAAccessSessionManager : NSObject {
    void /* unknown type, empty encoding */ accessSessionManager;
}

@property (nonatomic, readonly) char isActive;
@property (nonatomic, readonly) char isDiagnosticSubmissionAllowed;

- (id)init;
- (void).cxx_destruct;
- (void)pushSessionData:(id)a0;
- (void)pushSessionData:(id)a0 submitEventQueues:(char)a1;
- (void)pushSessionData:(id)a0 traits:(id)a1;
- (void)pushSessionData:(id)a0 traits:(id)a1 submitEventQueues:(char)a2;

@end
