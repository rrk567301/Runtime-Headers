@class NSTrackingArea;

@interface SafeAutoFillChoicesPopUpButton : NSPopUpButton {
    NSTrackingArea *_trackingArea;
}

@property (nonatomic) double highlightOffset;
@property (nonatomic) double menuWidth;

+ (Class)cellClass;

- (BOOL)allowsVibrancy;
- (void)updateTrackingAreas;
- (id)accessibilityRole;
- (void)mouseExited:(id)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)popUpButtonCell;
- (void)mouseMoved:(id)a0;
- (void)removeButtonHighlight;
- (void)showButtonArrows;

@end
