@interface UINSSystemAppearance : NSObject <UINSSystemAppearance>

@property (readonly, nonatomic) id encodedTextHighlightColor;
@property (readonly, nonatomic) id encodedDarkTextHighlightColor;
@property (readonly, nonatomic) id encodedUnemphasizedTextHighlightColor;
@property (readonly, nonatomic) id encodedDarkUnemphasizedTextHighlightColor;
@property (readonly, nonatomic) id encodedTableHighlightColor;
@property (readonly, nonatomic) id encodedDarkTableHighlightColor;
@property (readonly, nonatomic) id encodedSelectionMaterialTintColor;
@property (readonly, nonatomic) id encodedDarkSelectionMaterialTintColor;
@property (readonly, nonatomic) id encodedKeyboardFocusIndicatorColor;
@property (readonly, nonatomic) id encodedDarkKeyboardFocusIndicatorColor;
@property (readonly, nonatomic) unsigned long long scrollerStyle;
@property (readonly, nonatomic) unsigned long long scrollBarClickBehavior;
@property (readonly, nonatomic) char hasDarkWindowChrome;
@property (readonly, nonatomic) char accessibilityDisplayShouldIncreaseContrast;
@property (readonly, nonatomic) char accessibilityDisplayShouldReduceMotion;
@property (readonly, nonatomic) char accessibilityDisplayShouldInvertColors;
@property (readonly, nonatomic) char accessibilityDisplayShouldReduceTransparency;
@property (readonly, nonatomic) char accessibilityDisplayShouldUseGrayscale;
@property (readonly, nonatomic) char accessibilityDisplayShouldDifferentiateWithoutColor;
@property (readonly, nonatomic) char accessibilityIsVoiceOverEnabled;
@property (readonly, nonatomic) char accessibilityIsSwitchControlEnabled;
@property (readonly, nonatomic) char accessibilityIsZoomEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;

@end
