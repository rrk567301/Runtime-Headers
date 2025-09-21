@class NSString;

@interface CUIStyleEffectConfiguration : NSObject <NSCopying>

@property (nonatomic) long long state;
@property (nonatomic) long long presentationState;
@property (nonatomic) long long value;
@property (nonatomic) unsigned long long dimension1;
@property (copy, nonatomic) NSString *appearanceName;
@property (nonatomic) char useSimplifiedEffect;
@property (nonatomic) char foregroundColorShouldTintEffects;
@property (nonatomic) double brightnessMultiplier;
@property (nonatomic) unsigned long long colorTemperature;
@property (nonatomic) double effectScale;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)shouldIgnoreForegroundColor;
- (char)shouldRespectOutputBlending;

@end
