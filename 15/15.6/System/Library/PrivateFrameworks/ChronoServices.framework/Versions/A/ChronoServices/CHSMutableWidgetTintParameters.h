@class BSColor;

@interface CHSMutableWidgetTintParameters : CHSWidgetTintParameters

@property (nonatomic) long long filterStyle;
@property (nonatomic) long long fallbackFilterStyle;
@property (retain, nonatomic) BSColor *primaryTintColor;
@property (retain, nonatomic) BSColor *secondaryTintColor;
@property (nonatomic) double fraction;
@property (nonatomic) char accentedAlternateBackground;
@property (nonatomic) long long accentedDesaturatedMode;

- (void)setFraction:(double)a0;
- (void)setPrimaryTintColor:(id)a0;
- (void)setSecondaryTintColor:(id)a0;
- (void)setAccentedAlternateBackground:(char)a0;
- (void)setFilterStyle:(long long)a0;
- (void)setAccentedDesaturatedMode:(long long)a0;
- (void)setFallbackFilterStyle:(long long)a0;

@end
