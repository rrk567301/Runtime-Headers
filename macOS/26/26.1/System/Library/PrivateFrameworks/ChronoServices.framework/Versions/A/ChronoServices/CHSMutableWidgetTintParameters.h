@class BSColor, CHSGlassOptions;

@interface CHSMutableWidgetTintParameters : CHSWidgetTintParameters

@property (nonatomic) long long filterStyle;
@property (retain, nonatomic) BSColor *primaryTintColor;
@property (retain, nonatomic) BSColor *secondaryTintColor;
@property (nonatomic) double fraction;
@property (nonatomic) BOOL accentedAlternateBackground;
@property (nonatomic) long long accentedDesaturatedMode;
@property (copy, nonatomic) CHSGlassOptions *glassOptions;

- (BOOL)wantsSubduedGlass;
- (void)setAccentedAlternateBackground:(BOOL)a0;
- (void)setWantsSubduedGlass:(BOOL)a0;
- (id)initWithFilterStyle:(long long)a0;
- (void)setFilterStyle:(long long)a0;
- (void)setFraction:(double)a0;
- (void)setGlassOptions:(id)a0;
- (void)setPrimaryTintColor:(id)a0;
- (id)init;
- (void)setSecondaryTintColor:(id)a0;
- (void)setAccentedDesaturatedMode:(long long)a0;

@end
