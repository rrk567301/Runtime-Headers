@class NSTrackingArea;

@interface SafeAutoFillChoicesPopUpButton : NSPopUpButton {
    NSTrackingArea *_trackingArea;
}

@property (nonatomic) double highlightOffset;
@property (nonatomic) double menuWidth;

+ (Class)cellClass;

- (void).cxx_destruct;
- (id)popUpButtonCell;
- (id)accessibilityRole;
- (char)allowsVibrancy;
- (char)isAccessibilityElement;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)updateTrackingAreas;
- (void)removeButtonHighlight;
- (void)showButtonArrows;

@end
