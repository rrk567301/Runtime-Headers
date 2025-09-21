@class NSImage, AMPScrubber;

@interface AMPScrubberCell : NSSliderCell

@property (nonatomic) char showKnob;
@property (retain, nonatomic) NSImage *knobImage;
@property (readonly) AMPScrubber *scrubber;

- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })barRectFlipped:(char)a0;
- (char)continueTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (void)drawBarInside:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flipped:(char)a1;
- (void)drawKnob:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })knobRectFlipped:(char)a0;
- (double)knobThickness;
- (char)startTrackingAt:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)stopTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2 mouseIsUp:(char)a3;

@end
