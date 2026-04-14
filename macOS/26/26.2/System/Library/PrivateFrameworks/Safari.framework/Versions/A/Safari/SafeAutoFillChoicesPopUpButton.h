@class NSTrackingArea;

@interface SafeAutoFillChoicesPopUpButton : NSPopUpButton {
    NSTrackingArea *_trackingArea;
}

@property (nonatomic) double highlightOffset;
@property (nonatomic) double menuWidth;

+ (Class)cellClass;

- (void)mouseExited:(id)a0;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (BOOL)allowsVibrancy;
- (void)updateTrackingAreas;
- (id)popUpButtonCell;
- (void)mouseMoved:(id)a0;
- (void)removeButtonHighlight;
- (void)showButtonArrows;

@end
