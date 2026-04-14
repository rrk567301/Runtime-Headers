@class NSView;

@interface NSGreySliders : NSColorSpaceSliders {
    id greySlider;
    id greyText;
    id greyButtons[5];
    id opacityButtons;
    double opacityDistanceFromBottom;
    BOOL alphaButtonsAreHidden;
}

@property (retain) NSView *greyView;
@property id greyButton0;
@property id greyButton1;
@property id greyButton2;
@property id greyButton3;
@property id greyButton4;

+ (id)genericColorSpace;

- (void)dealloc;
- (BOOL)worksWhenModal;
- (id)provideNewSubview:(id)a0;
- (id)regularColorIfPossible:(id)a0;
- (void)setMatchedColor:(id)a0;
- (void)_adjustControls:(id)a0 andSetColor:(BOOL)a1;
- (void)adjustControls:(id)a0;
- (id)fieldEditableControl;
- (void)jumpSlider:(id)a0;
- (void)_configureGreyButton:(id)a0 index:(long long)a1;
- (void)setGreyButton5:(id)a0;

@end
