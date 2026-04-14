@protocol SiriUITextInputViewDelegate;

@interface SiriUITextInputView : NSTextView

@property (weak) id<SiriUITextInputViewDelegate> inputDelegate;

- (void).cxx_destruct;
- (void)insertNewline:(id)a0;
- (void)mouseDown:(id)a0;
- (void)moveDown:(id)a0;
- (BOOL)shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1;

@end
