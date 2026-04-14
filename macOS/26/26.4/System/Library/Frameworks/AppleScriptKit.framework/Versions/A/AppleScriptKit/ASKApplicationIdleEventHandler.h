@class NSTimer;

@interface ASKApplicationIdleEventHandler : ASKApplicationEventHandler {
    NSTimer *_idleTimer;
    BOOL _applicationFinishedLaunching;
}

- (void)enable;
- (void)disable;
- (void)finalize;
- (id)init;
- (void)dealloc;
- (id)idleTimer;
- (void)setIdleTimer:(id)a0;
- (void)idleUsingTimer:(id)a0;
- (void)didFinishLaunching:(id)a0;
- (void)willTerminate:(id)a0;

@end
