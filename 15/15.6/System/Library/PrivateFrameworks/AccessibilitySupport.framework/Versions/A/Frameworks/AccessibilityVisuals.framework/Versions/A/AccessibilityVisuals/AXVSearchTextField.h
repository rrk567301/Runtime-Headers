@class NSString;
@protocol AXVSearchTextFieldUpdateListener;

@interface AXVSearchTextField : AXVTextField <NSTextViewDelegate>

@property (nonatomic) char _ignoreNextSelectionUpdateFromTextChange;
@property (nonatomic) char _returnPressed;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } _lastGoodSelectionRange;
@property (weak, nonatomic) id<AXVSearchTextFieldUpdateListener> updateListener;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectionRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setStringValue:(id)a0;
- (char)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (char)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textView:(id)a0 willChangeSelectionFromCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 toCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)_onReturnKeyDown;

@end
