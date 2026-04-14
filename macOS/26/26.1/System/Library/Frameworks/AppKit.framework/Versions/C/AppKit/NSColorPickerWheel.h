@class NSView;

@interface NSColorPickerWheel : NSColorPicker <NSColorPickingCustom> {
    id wheelView;
    id brightnessSlider;
    BOOL previouslyTracking;
}

@property (retain) NSView *containerView;

- (void)setColor:(id)a0;
- (long long)currentMode;
- (void)dealloc;
- (double)_insertionOrder;
- (id)provideNewView:(BOOL)a0;
- (void)brightnessSlider:(id)a0;
- (id)buttonToolTip;
- (id)initWithPickerMask:(unsigned long long)a0 colorPanel:(id)a1;
- (BOOL)supportsMode:(long long)a0;
- (void)viewSizeChanged:(id)a0;
- (BOOL)worksWhenModal;

@end
