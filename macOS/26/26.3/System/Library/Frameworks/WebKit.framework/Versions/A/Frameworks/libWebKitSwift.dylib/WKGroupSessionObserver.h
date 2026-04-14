@interface WKGroupSessionObserver : NSObject {
    void /* unknown type, empty encoding */ incomingSessionsTask;
    void /* function */ newSessionCallback;
}

@property (nonatomic, copy) id /* block */ newSessionCallback;

- (id)init;
- (void).cxx_destruct;

@end
