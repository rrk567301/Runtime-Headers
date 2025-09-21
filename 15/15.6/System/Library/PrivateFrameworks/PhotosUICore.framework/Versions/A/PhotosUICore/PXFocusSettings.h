@interface PXFocusSettings : PXSettings

@property (nonatomic) double focusAnimationPadding;
@property (nonatomic) long long focusAnimationStyle;
@property (nonatomic) double pressedAnimationPadding;
@property (nonatomic) long long pressedAnimationStyle;
@property (nonatomic) char hideFocusRing;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (id)parentSettings;

@end
