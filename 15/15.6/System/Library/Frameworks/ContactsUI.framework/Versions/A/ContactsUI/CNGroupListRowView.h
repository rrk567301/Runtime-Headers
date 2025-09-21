@class NSString;

@interface CNGroupListRowView : NSTableRowView <ABGroupListRowView>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (char)allowsVibrancy;
- (void)didAddSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isHighlighted;
- (void)setEmphasized:(char)a0;
- (void)setSelected:(char)a0;
- (char)wantsUpdateLayer;
- (void)CNGroupListRowView_commonInit;
- (void)updateAppearanceOfSubview:(id)a0;
- (void)updateAppearanceOfSubviews;

@end
