@class FI_TFloatingInputView;

@interface FI_TFloatingInputWindow : NSPanel {
    FI_TFloatingInputView *_floatingInputView;
}

- (BOOL)canBecomeKeyWindow;
- (id)text;
- (void).cxx_destruct;
- (void)setText:(id)a0;
- (id)init;
- (BOOL)canBecomeMainWindow;
- (id)inputContext;
- (BOOL)preProcessedByInputMethod:(id)a0 forDelegate:(id)a1;

@end
