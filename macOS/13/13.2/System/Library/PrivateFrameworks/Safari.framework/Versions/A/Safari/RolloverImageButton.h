@class NSColor, NSImage;

@interface RolloverImageButton : RolloverTrackingButton

@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *rolloverColor;
@property (retain, nonatomic) NSColor *alternateColor;
@property (retain, nonatomic) NSColor *rolloverBackgroundColor;
@property (retain, nonatomic) NSColor *alternateBackgroundColor;
@property (retain, nonatomic) NSImage *rolloverImage;
@property (retain, nonatomic) NSImage *focusRingMask;
@property (nonatomic) BOOL allowsVibrancy;
@property (nonatomic) double cornerRadius;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)awakeFromNib;
- (void)_windowChangedKeyState;
- (void)drawFocusRingMask;
- (BOOL)shouldUseRolloverAppearance;
- (id)_modifierColor;
- (id)_modifierBackgroundColor;
- (void)_setAttributes;

@end
