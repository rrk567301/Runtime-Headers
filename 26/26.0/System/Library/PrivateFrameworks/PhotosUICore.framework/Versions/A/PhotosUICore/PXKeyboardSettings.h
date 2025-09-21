@interface PXKeyboardSettings : PXSettings

@property (nonatomic) long long yearsFocusAnimationStyle;
@property (nonatomic) double yearsFocusPadding;
@property (nonatomic) long long monthsFocusAnimationStyle;
@property (nonatomic) double monthsFocusPadding;
@property (nonatomic) long long daysFocusAnimationStyle;
@property (nonatomic) double daysFocusPadding;
@property (nonatomic) double detailsViewOverlayAlpha;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (id)parentSettings;

@end
