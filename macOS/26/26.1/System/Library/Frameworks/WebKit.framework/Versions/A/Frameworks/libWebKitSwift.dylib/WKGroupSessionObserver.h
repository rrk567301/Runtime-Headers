@interface WKGroupSessionObserver : NSObject {
    void /* unknown type, empty encoding */ incomingSessionsTask;
    void /* function */ newSessionCallback;
}

@property (nonatomic, copy) id /* block */ newSessionCallback;

- (void).cxx_destruct;
- (id)init;

@end
