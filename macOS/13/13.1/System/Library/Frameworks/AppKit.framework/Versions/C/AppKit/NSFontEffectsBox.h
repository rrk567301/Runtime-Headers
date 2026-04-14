@class NSString, NSMutableDictionary, NSMutableArray;

@interface NSFontEffectsBox : NSBox <NSToolbarDelegate> {
    id _blurSlider;
    id _opacitySlider;
    id _radiusSlider;
    id _angleDial;
    id _mainControlsBox;
    id _shadowControlsBox;
    id _mainEffectsBox;
    id _angleLabel;
    id _underlineButton;
    id _strikeButton;
    id _shadowOpacitySliderToolbarItem;
    id _shadowBlurSliderToolbarItem;
    id _shadowOffsetSliderToolbarItem;
    id _shadowAngleDialToolbarItem;
    id _shadowToggleButton;
    id _textColorButton;
    id _documentColorButton;
    NSMutableDictionary *_attributesToAdd;
    NSMutableArray *_attributesToRemove;
    id _febUnused[5];
    int _shadowBlur;
    int _colorState;
    struct __feblags { unsigned char showUnderline : 1; unsigned char showStrikethrough : 1; unsigned char showTextColor : 1; unsigned char showDocumentColor : 1; unsigned char showShadowEffects : 1; unsigned char updatingAttributes : 1; unsigned int reserved : 26; } _febFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awakeFromNib;
- (id)toolbarDefaultItemIdentifiers:(id)a0;
- (id)toolbarAllowedItemIdentifiers:(id)a0;
- (void)changeColor:(id)a0;
- (void)_changeShadowBlur:(id)a0;
- (void)_changeShadowOpacity:(id)a0;
- (void)_changeShadowAngle:(id)a0;
- (BOOL)_ignoreBadFirstResponders;
- (void)_changeTextColor:(id)a0;
- (void)_changeDocumentColor:(id)a0;
- (void)_changeColorToColor:(id)a0;
- (void)_orderFrontModalColorPanel;
- (BOOL)shadowsEnabled;
- (id)_currentShadowForFont:(id)a0;
- (id)convertAttributes:(id)a0;
- (void)_setAttributes:(id)a0 isMultiple:(BOOL)a1;
- (id)_foregroundColor;
- (id)_documentBackgroundColor;
- (void)_validateFontPanelFontAttributes:(id)a0;
- (long long)_underlineStyle;
- (long long)_strikethroughStyle;
- (long long)_lineStyleForLineStyleButton:(id)a0;
- (void)_openEffectsButton:(id)a0;
- (void)_toggleShadow:(id)a0;
- (void *)carbonNotificationProc;
- (void)_sendCarbonNotificationForTag:(unsigned int)a0 withValuePtr:(const void *)a1 andSize:(unsigned long long)a2;
- (void)_sendCarbonNotificationFor:(unsigned long long)a0 tags:(const unsigned int *)a1 withValuePtrs:(const void **)a2 andSizes:(const unsigned long long *)a3;
- (BOOL)_sendChangeAttributesActionIfSupported;
- (void)_validateUnderline:(BOOL)a0;
- (void)_validateStrikethrough:(BOOL)a0;
- (void)_validateTextColor:(BOOL)a0;
- (void)_validateDocumentColor:(BOOL)a0;
- (void)_validateShadowEffect:(BOOL)a0;

@end
