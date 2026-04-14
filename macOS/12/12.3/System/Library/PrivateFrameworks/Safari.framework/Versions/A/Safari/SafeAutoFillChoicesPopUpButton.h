@class NSTrackingArea;

@interface SafeAutoFillChoicesPopUpButton : NSPopUpButton {
    NSTrackingArea *_trackingArea;
}

@property (nonatomic) double highlightOffset;
@property (nonatomic) double menuWidth;

+ (Class)cellClass;

- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)updateTrackingAreas;
- (id)popUpButtonCell;
- (void)removeButtonHighlight;
- (void)showButtonArrows;

@end
