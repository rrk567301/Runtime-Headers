@class NSTrackingArea;

@interface SafeAutoFillChoicesPopUpButton : NSPopUpButton {
    NSTrackingArea *_trackingArea;
}

@property (nonatomic) double highlightOffset;
@property (nonatomic) double menuWidth;

+ (Class)cellClass;

- (id)accessibilityRole;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)updateTrackingAreas;
- (BOOL)isAccessibilityElement;
- (BOOL)allowsVibrancy;
- (id)popUpButtonCell;
- (void)mouseMoved:(id)a0;
- (void)removeButtonHighlight;
- (void)showButtonArrows;

@end
