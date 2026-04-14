@class NSView, NSTextField;

@interface WKDataListSuggestionView : NSTableCellView {
    struct RetainPtr<NSTextField> { NSTextField *m_ptr; } _valueField;
    struct RetainPtr<NSTextField> { NSTextField *m_ptr; } _labelField;
    struct RetainPtr<NSView> { NSView *m_ptr; } _bottomDivider;
}

@property (nonatomic) BOOL shouldShowBottomDivider;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id).cxx_construct;
- (void)setBackgroundStyle:(long long)a0;
- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (void)setValue:(id)a0 label:(id)a1;

@end
