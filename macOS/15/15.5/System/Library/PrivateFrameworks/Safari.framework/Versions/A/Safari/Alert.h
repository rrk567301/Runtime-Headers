@class NSString, NSTimer;

@interface Alert : NSAlert <NSWindowDelegate> {
    id /* block */ _completionHandler;
    NSTimer *_enableButtonsTimer;
    id _leftMouseButtonEventMonitor;
}

@property (nonatomic, getter=isDelayingButtonActions) BOOL delayButtonActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)buttonPressed:(id)a0;
- (void)windowDidBecomeKey:(id)a0;
- (void)showAlertWithCompletionHandler:(id /* block */)a0;
- (void)_removeLeftMouseButtonEventMonitor;
- (void)_restartEnableButtonsTimer;
- (void)_updateButtonsState:(BOOL)a0;

@end
