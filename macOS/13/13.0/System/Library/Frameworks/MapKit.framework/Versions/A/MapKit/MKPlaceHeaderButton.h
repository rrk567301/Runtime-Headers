@class NSString, NSLayoutConstraint, _MKPlaceActionButtonController;

@interface MKPlaceHeaderButton : NSButton <_MKPlaceActionControlledButton> {
    unsigned long long _buttonType;
    BOOL _primary;
    NSLayoutConstraint *_heightConstraint;
}

@property (weak, nonatomic) _MKPlaceActionButtonController *buttonController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)infoCardThemeChanged;
- (void)_contentSizeDidChange;
- (void)buttonSelected:(id)a0;
- (void)placeActionButtonControllerTextDidChange:(id)a0;
- (void)setPrimaryTitle:(id)a0;
- (void)setPrimaryTitle:(id)a0 subtitle:(id)a1;
- (id)initWithPrimaryType:(unsigned long long)a0;
- (void)_setVibrantView;
- (void)applyButtonDefaultConfiguration;
- (id)_primaryButtonTextColor;
- (void)_updateStylePrimaryButton;
- (void)_updateStyleNonPrimaryButton;
- (void)updateButtonWithHighlighted:(BOOL)a0;

@end
