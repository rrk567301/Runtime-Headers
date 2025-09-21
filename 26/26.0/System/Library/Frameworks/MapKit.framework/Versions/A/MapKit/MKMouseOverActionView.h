@class NSTrackingArea;

@interface MKMouseOverActionView : MKViewWithHairline {
    NSTrackingArea *_trackingArea;
}

@property (copy, nonatomic) id /* block */ onMouseEnter;
@property (copy, nonatomic) id /* block */ onMouseExit;

- (void)updateTrackingAreas;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;

@end
