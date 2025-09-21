@interface CinematicFramingSessionFramingParameters : NSObject

@property (nonatomic) float deadbandWidthMinFraction;
@property (nonatomic) float deadbandWidthMaxFraction;
@property (nonatomic) float deadbandWidthFractionOfScreenWidth;
@property (nonatomic) float deadbandHeightFractionOfScreenHeight;
@property (nonatomic) float deadbandTopOffsetFractionOfScreenHeight;
@property (nonatomic) float subjectWidthPaddingMultiplier;
@property (nonatomic) float subjectHeightPaddingMultiplier;

- (id)asDictionary;
- (id)initWithPlist:(id)a0;
- (void)_initializeWithPlist:(id)a0;
- (id)initWithPlistPath:(id)a0;

@end
