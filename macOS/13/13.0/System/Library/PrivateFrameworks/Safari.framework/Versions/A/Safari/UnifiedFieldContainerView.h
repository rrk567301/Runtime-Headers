@class UnifiedField, UnifiedFieldBezelView;

@interface UnifiedFieldContainerView : NSTextField

@property (retain, nonatomic) UnifiedField *unifiedField;
@property (retain, nonatomic) UnifiedFieldBezelView *bezelView;

+ (void)initialize;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setControlSize:(unsigned long long)a0;
- (BOOL)allowsVibrancy;
- (id)accessibilityChildren;
- (void)viewDidMoveToSuperview;
- (void)_finishInitialization;

@end
