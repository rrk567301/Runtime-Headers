@class SRUIFLightweightQueryHistory, NSString;
@protocol SiriUITextInputViewDelegate;

@interface SiriUITextInputView : NSTextView {
    SRUIFLightweightQueryHistory *_history;
    BOOL _isNavigatingHistory;
    NSString *_preNavigationString;
}

@property (weak) id<SiriUITextInputViewDelegate> inputDelegate;

- (void)clearHistory;
- (id)menuForEvent:(id)a0;
- (void)moveDown:(id)a0;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)insertTab:(id)a0;
- (void)insertNewline:(id)a0;
- (void)moveUp:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)insertText:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setAnnotations:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)insertBackTab:(id)a0;
- (void)resetHistoryNavigation;

@end
