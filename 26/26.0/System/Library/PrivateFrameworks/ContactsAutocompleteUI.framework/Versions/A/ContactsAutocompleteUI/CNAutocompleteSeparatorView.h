@interface CNAutocompleteSeparatorView : NSView

@property (nonatomic) double height;

+ (id)sectionSeparator;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (BOOL)wantsUpdateLayer;
- (void)separatorViewCommonInit;

@end
