@class NSColorPickerSliders, NSColorSpace;

@interface NSColorSpaceSliders : NSObject <NSSliderViewRequiredMethods> {
    id colorPanel;
    NSColorPickerSliders *controllingPicker;
    NSColorSpace *activeColorSpace;
}

+ (id)genericColorSpace;

- (void)setActiveColorSpace:(id)a0;
- (void)dealloc;
- (id)activeColorSpace;
- (void)setColor:(id)a0;
- (void)adjustControls:(id)a0;
- (struct CGSize { double x0; double x1; })requiredMinSize;
- (void)_adjustControls:(id)a0 andSetColor:(BOOL)a1;
- (id)fieldEditableControl;
- (void)finishProvideNewSubviewSetup;
- (id)provideNewSubview:(id)a0;
- (id)regularColorIfPossible:(id)a0;
- (void)setMatchedColor:(id)a0;
- (void)takeColorSpaceFrom:(id)a0;

@end
