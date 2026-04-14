@interface FI_TPathTextField : FI_TTextField {
    struct optional<_NSRange> { union { char __null_state_; struct _NSRange { unsigned long long location; unsigned long long length; } __val_; } ; BOOL __engaged_; } _shouldSelectRange;
}

- (void)textDidChange:(id)a0;
- (void)selectAll;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setStringValue:(id)a0;
- (void)layout;
- (id).cxx_construct;
- (void)moveSelectionToEnd;
- (void)moveSelectionTo:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
