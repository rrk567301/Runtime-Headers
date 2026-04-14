@class NSAlert, NSImageView, NSTextField;

@interface NSSavePanelAlertStyleContentView : NSView {
    NSAlert *alert;
}

@property NSImageView *iconView;
@property NSTextField *messageTextField;
@property NSTextField *informativeMessageTextField;

- (void)dealloc;
- (void)setMessage:(id)a0;
- (void)viewDidMoveToWindow;
- (void)stopTimerForSpeaking;
- (void)startTimerForSpeaking;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_windowDidOrderOnScreen;
- (void)cancelAlertSpeaking;

@end
