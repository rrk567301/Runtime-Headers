@class FI_TFloatingInputView;

@interface FI_TFloatingInputWindow : NSPanel {
    FI_TFloatingInputView *_floatingInputView;
}

- (id)init;
- (void)setText:(id)a0;
- (id)text;
- (BOOL)canBecomeKeyWindow;
- (void).cxx_destruct;
- (BOOL)canBecomeMainWindow;
- (id)inputContext;
- (BOOL)preProcessedByInputMethod:(id)a0 forDelegate:(id)a1;

@end
