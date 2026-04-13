@class NSView;

@interface NSRGBSliders : NSColorSpaceSliders {
    id redSlider;
    id greenSlider;
    id blueSlider;
    id redText;
    id greenText;
    id blueText;
    id rgbText;
    id hexText;
    long long _entryMode;
    id hexContainer;
}

@property (retain) NSView *rgbView;

+ (id)genericColorSpace;

- (void)dealloc;
- (BOOL)worksWhenModal;
- (void)takeColorSpaceFrom:(id)a0;
- (id)provideNewSubview:(id)a0;
- (void)setEntryMode:(long long)a0;
- (id)regularColorIfPossible:(id)a0;
- (void)setMatchedColor:(id)a0;
- (void)_adjustControls:(id)a0 andSetColor:(BOOL)a1;
- (void)adjustControls:(id)a0;
- (id)fieldEditableControl;
- (void)hexAction:(id)a0;

@end
