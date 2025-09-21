@class NSView;

@interface NSColorPickerWheel : NSColorPicker <NSColorPickingCustom> {
    id wheelView;
    id brightnessSlider;
    char previouslyTracking;
}

@property (retain) NSView *containerView;

- (void)dealloc;
- (long long)currentMode;
- (void)setColor:(id)a0;
- (double)_insertionOrder;
- (id)provideNewView:(char)a0;
- (void)brightnessSlider:(id)a0;
- (id)buttonToolTip;
- (id)initWithPickerMask:(unsigned long long)a0 colorPanel:(id)a1;
- (char)supportsMode:(long long)a0;
- (void)viewSizeChanged:(id)a0;
- (char)worksWhenModal;

@end
