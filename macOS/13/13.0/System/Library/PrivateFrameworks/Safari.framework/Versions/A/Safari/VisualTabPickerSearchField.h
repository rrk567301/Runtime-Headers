@protocol VisualTabPickerSearchFieldDelegate;

@interface VisualTabPickerSearchField : NSSearchField

@property (weak) id<VisualTabPickerSearchFieldDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityIdentifier;
- (void)_searchTextDidChange:(id)a0;

@end
