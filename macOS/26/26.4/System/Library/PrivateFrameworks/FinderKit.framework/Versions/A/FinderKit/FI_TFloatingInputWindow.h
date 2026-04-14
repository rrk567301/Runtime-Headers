@class FI_TFloatingInputView;

@interface FI_TFloatingInputWindow : NSPanel {
    FI_TFloatingInputView *_floatingInputView;
}

- (void).cxx_destruct;
- (id)init;
- (id)text;
- (BOOL)canBecomeKeyWindow;
- (void)setText:(id)a0;
- (BOOL)canBecomeMainWindow;
- (id)inputContext;
- (BOOL)preProcessedByInputMethod:(id)a0 forDelegate:(id)a1;

@end
