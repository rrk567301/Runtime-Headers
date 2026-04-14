@interface CNAutocompleteSeparatorView : NSView

@property (nonatomic) double height;

+ (id)sectionSeparator;

- (void)updateLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsUpdateLayer;
- (void)separatorViewCommonInit;

@end
