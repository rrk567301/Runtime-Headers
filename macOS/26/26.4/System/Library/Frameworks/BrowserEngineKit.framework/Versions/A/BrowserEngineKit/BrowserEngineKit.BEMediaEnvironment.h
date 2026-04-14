@interface BrowserEngineKit.BEMediaEnvironment : NSObject {
    void /* unknown type, empty encoding */ inner;
}

- (BOOL)suspendWithError:(id *)a0;
- (id)createXPCRepresentation;
- (void).cxx_destruct;
- (id)init;
- (BOOL)activateWithError:(id *)a0;
- (id)initWithWebPageURL:(id)a0;
- (id)initWithXPCRepresentation:(id)a0 error:(id *)a1;
- (id)makeCaptureSessionWithError:(id *)a0;

@end
