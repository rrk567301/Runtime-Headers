@class NSColor;

@interface AMPAdjustableDividerTableRow : NSTableRowView

@property (nonatomic) double leadingInset;
@property (nonatomic) double trailingInset;
@property (retain, nonatomic) NSColor *overrideSelectionColor;

- (void).cxx_destruct;
- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (id)_makeSelectedBackgroundView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_separatorRect;
- (id)primarySelectionColor;
- (id)propertyKeysForViewSpy;

@end
