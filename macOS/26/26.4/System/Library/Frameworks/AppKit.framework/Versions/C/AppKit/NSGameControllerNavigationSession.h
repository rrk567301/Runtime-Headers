@class GCUINavigationSession, NSGameControllerNavigationDispatcher;

@interface NSGameControllerNavigationSession : NSResponder

@property (class, readonly) int checkToken;
@property (class, readonly) NSGameControllerNavigationSession *sharedSession;
@property (class, readonly) unsigned long long gameControllerSystemStatus;

@property long long resumeCount;
@property long long state;
@property int dispatchToken;
@property (retain) GCUINavigationSession *session;
@property (retain) NSGameControllerNavigationDispatcher *dispatcher;
@property (readonly, getter=isIdle) BOOL idle;

+ (void)_setGameControllerSystemStatus:(unsigned long long)a0;

- (void)resume;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)suspend;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)_activateNavigationSession;
- (void)_beginNavigationSession;
- (void)_deferNavigationSession;
- (void)_endNavigationSession;
- (void)_synchronizeGameControllerSystemStatus;
- (id)acquireAlertPresentationAssertion:(id)a0;
- (BOOL)canBeActivated;
- (BOOL)canBeDeferred;
- (void)releaseAlertPresentationAssertion:(id)a0;

@end
