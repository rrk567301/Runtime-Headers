@class NSColor, NSTextField;

@interface _NSToolbarItemBadgeView : NSView {
    NSColor *_backgroundColor;
    NSColor *_foregroundColor;
}

@property (retain, nonatomic) NSTextField *titleLabel;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *foregroundColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateLayer;
- (void)setString:(id)a0;
- (id)_effectingBackgroundColor;
- (id)_effectingForegroundColor;
- (void)addTitleLabel:(id)a0;
- (id)createTitleLabel;
- (void)setUpView;

@end
