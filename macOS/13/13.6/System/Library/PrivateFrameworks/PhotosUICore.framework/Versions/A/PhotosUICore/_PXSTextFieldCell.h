@class NSString;

@interface _PXSTextFieldCell : NSTextFieldCell

@property (copy, nonatomic) NSString *text;
@property (nonatomic, getter=isEmphasized) BOOL emphasized;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double fontSize;

- (void).cxx_destruct;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)setBackgroundStyle:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_invalidateAttributedString;
- (void)_updateAttributedString;

@end
