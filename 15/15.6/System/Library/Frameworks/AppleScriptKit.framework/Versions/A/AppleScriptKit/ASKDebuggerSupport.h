@interface ASKDebuggerSupport : NSObject {
    char _isDebugging;
    char _isDebuggerReady;
    int _pid;
}

+ (id)sharedDebuggerSupport;

- (id)init;
- (int)pid;
- (char)isDebugging;
- (void)setPid:(int)a0;
- (char)isDebuggerReady;
- (void)setIsDebugging:(char)a0;
- (void)checkForDebugger;
- (void)handleContinueAppleEvent:(id)a0 withReplyEvent:(id)a1;
- (void)notifyDebugger;
- (void)processEvents;
- (void)registerForContinueEvent;
- (id)sendEvent:(id)a0 sendMode:(int)a1;
- (void)setIsDebuggerReady:(char)a0;

@end
