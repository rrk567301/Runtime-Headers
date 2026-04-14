@class GCDeviceSession, OS_dispatch_queue;

@interface GCUINavigationSession : NSObject {
    void /* unknown type, empty encoding */ controllers;
    void /* function */ navigationEventHandler;
}

@property (nonatomic, readonly) GCDeviceSession *deviceSession;
@property (nonatomic, copy) id /* block */ navigationEventHandler;
@property (nonatomic, retain) OS_dispatch_queue *targetQueue;

- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (id)acquireAlertPresentationAssertion:(id)a0;
- (void)activateWithCompletionHandler:(id /* block */)a0;

@end
