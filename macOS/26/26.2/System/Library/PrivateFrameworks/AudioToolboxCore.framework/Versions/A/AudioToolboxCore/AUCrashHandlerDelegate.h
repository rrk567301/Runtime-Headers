@class AUCrashHandler;

@interface AUCrashHandlerDelegate : NSObject <AUCrashHandlerCallbackProtocol> {
    AUCrashHandler *weakCrashHandler;
}

- (id)init:(id)a0;
- (void).cxx_destruct;
- (void)notifyCrash:(struct { unsigned int x0[8]; })a0 withCrashInfo:(id)a1;

@end
