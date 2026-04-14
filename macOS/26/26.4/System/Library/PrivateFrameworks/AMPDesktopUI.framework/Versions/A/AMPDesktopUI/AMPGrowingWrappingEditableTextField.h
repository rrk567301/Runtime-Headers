@interface AMPGrowingWrappingEditableTextField : NSTextField

@property (nonatomic) BOOL isFirstResponder;
@property (nonatomic) long long contentsLimit;

- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;

@end
