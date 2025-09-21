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

+ (void)_setGameControllerSystemStatus:(unsigned long long)a0;

- (void)invalidate;
- (void)suspend;
- (void)resume;
- (id)init;
- (void).cxx_destruct;
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
