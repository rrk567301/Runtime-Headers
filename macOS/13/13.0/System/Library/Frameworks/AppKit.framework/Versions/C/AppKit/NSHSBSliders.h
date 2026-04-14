@class NSView, NSColor;

@interface NSHSBSliders : NSColorSpaceSliders {
    id hueSlider;
    id saturationSlider;
    id brightnessSlider;
    id hueText;
    id saturationText;
    id brightnessText;
    NSColor *currColor;
    NSColor *backgroundColor;
    id sliderMatrix;
}

@property (retain) NSView *hsbView;

+ (id)genericColorSpace;

- (void)dealloc;
- (BOOL)worksWhenModal;
- (void)viewSizeChanged:(id)a0;
- (id)provideNewSubview:(id)a0;
- (void)_adjustControls:(id)a0 andSetColor:(BOOL)a1;
- (void)adjustControls:(id)a0;
- (id)regularColorIfPossible:(id)a0;
- (id)fieldEditableControl;
- (void)setMatchedColor:(id)a0;
- (struct CGSize { double x0; double x1; })requiredMinSize;

@end
