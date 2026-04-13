@class NSColorPickerSliders, NSColorSpace;

@interface NSColorSpaceSliders : NSObject <NSSliderViewRequiredMethods> {
    id colorPanel;
    NSColorPickerSliders *controllingPicker;
    NSColorSpace *activeColorSpace;
}

+ (id)genericColorSpace;

- (void)dealloc;
- (void)setColor:(id)a0;
- (void)takeColorSpaceFrom:(id)a0;
- (id)provideNewSubview:(id)a0;
- (void)setActiveColorSpace:(id)a0;
- (id)activeColorSpace;
- (id)regularColorIfPossible:(id)a0;
- (void)setMatchedColor:(id)a0;
- (void)_adjustControls:(id)a0 andSetColor:(BOOL)a1;
- (void)adjustControls:(id)a0;
- (id)fieldEditableControl;
- (void)finishProvideNewSubviewSetup;
- (struct CGSize { double x0; double x1; })requiredMinSize;

@end
