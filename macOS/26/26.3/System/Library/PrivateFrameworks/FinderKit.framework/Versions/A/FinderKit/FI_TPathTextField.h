@interface FI_TPathTextField : FI_TTextField {
    struct optional<_NSRange> { union { char __null_state_; struct _NSRange { unsigned long long location; unsigned long long length; } __val_; } ; BOOL __engaged_; } _shouldSelectRange;
}

- (void)selectAll;
- (void)setStringValue:(id)a0;
- (void)layout;
- (void)textDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id).cxx_construct;
- (void)moveSelectionToEnd;
- (void)moveSelectionTo:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
