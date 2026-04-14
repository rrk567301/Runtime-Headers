@interface IRSiriHomeSession : NSObject {
    void /* unknown type, empty encoding */ siriHomeSession;
}

- (void).cxx_destruct;
- (id)init;
- (void)donateEvent:(id)a0 forSuggestionTarget:(id)a1;
- (void)captureSessionContextWithTargets:(id)a0 context:(id)a1 microLocation:(id)a2 timestamp:(id)a3;
- (id)initWithQueue:(id)a0 microLocationProvider:(id)a1 timerProvider:(id)a2;

@end
