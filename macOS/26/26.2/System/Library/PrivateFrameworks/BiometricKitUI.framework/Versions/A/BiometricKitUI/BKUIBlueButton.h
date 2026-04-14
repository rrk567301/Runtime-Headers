@class NSTrackingArea;

@interface BKUIBlueButton : NSButton {
    NSTrackingArea *trackingArea;
}

- (void)mouseEntered:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)updateTrackingAreas;
- (void)dealloc;

@end
