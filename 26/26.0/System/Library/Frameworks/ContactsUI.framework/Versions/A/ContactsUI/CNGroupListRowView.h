@class NSString;

@interface CNGroupListRowView : NSTableRowView <ABGroupListRowView>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isHighlighted;
- (void)didAddSubview:(id)a0;
- (void)setSelected:(BOOL)a0;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEmphasized:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)wantsUpdateLayer;
- (void)CNGroupListRowView_commonInit;
- (void)updateAppearanceOfSubview:(id)a0;
- (void)updateAppearanceOfSubviews;

@end
