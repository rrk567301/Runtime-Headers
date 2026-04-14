@class NSTrackingArea;

@interface SafeAutoFillChoicesPopUpButton : NSPopUpButton {
    NSTrackingArea *_trackingArea;
}

@property (nonatomic) double highlightOffset;
@property (nonatomic) double menuWidth;

+ (Class)cellClass;

- (void)mouseExited:(id)a0;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void)updateTrackingAreas;
- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (id)popUpButtonCell;
- (void)mouseMoved:(id)a0;
- (void)removeButtonHighlight;
- (void)showButtonArrows;

@end
