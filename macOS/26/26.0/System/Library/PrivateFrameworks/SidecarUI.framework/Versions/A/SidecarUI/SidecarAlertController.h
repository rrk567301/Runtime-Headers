@class NSWindow, SidecarRunLoopSource, SidecarRequest, NSAlert, SidecarRunLoopCondition;

@interface SidecarAlertController : NSWindowController {
    NSAlert *_alert;
    SidecarRunLoopCondition *_condition;
    SidecarRunLoopSource *_observer;
    NSWindow *_parentWindow;
    _Atomic BOOL _modal;
}

@property (retain, nonatomic) NSAlert *alert;
@property (readonly, nonatomic) SidecarRequest *request;

- (void)loadWindow;
- (void)dealloc;
- (void)showWindow:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (long long)runModal;
- (void)buttonPressed:(id)a0;
- (BOOL)isWindowLoaded;
- (void)_modalResponse:(long long)a0;
- (void)_prepareModelessPanel;
- (void)_startObserver;
- (void)_stopObserver;
- (BOOL)autoDismissOnFinished;
- (id)initWithRequest:(id)a0 parentWindow:(id)a1;
- (BOOL)showErrorOnFinished;

@end
