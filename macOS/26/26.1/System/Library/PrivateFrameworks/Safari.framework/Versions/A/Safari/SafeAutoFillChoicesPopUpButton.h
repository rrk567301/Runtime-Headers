@class NSTrackingArea;

@interface SafeAutoFillChoicesPopUpButton : NSPopUpButton {
    NSTrackingArea *_trackingArea;
}

@property (nonatomic) double highlightOffset;
@property (nonatomic) double menuWidth;

+ (Class)cellClass;

- (BOOL)isAccessibilityElement;
- (void)mouseExited:(id)a0;
- (void)updateTrackingAreas;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (id)popUpButtonCell;
- (void)mouseMoved:(id)a0;
- (void)removeButtonHighlight;
- (void)showButtonArrows;

@end
