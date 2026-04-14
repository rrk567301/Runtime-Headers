@class NSString, NSImage, NSButton, NSColor;
@protocol FavoritesPickerCellViewAccessibilityDelegate;

@interface FavoritesPickerCellView : NSScrubberItemView {
    NSButton *_button;
}

@property (nonatomic) int style;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (weak, nonatomic) id<FavoritesPickerCellViewAccessibilityDelegate> accessibilityDelegate;

- (id)accessibilityTitle;
- (id)accessibilityLabel;
- (void)setAccessibilityTitle:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAccessibilityLabel:(id)a0;
- (void).cxx_destruct;
- (void)_createButton;
- (void)_buttonPressed:(id)a0;
- (void)_updateViewVisibility;

@end
