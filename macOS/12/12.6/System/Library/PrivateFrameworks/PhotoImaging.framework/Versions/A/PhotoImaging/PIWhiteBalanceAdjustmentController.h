@class NSString;

@interface PIWhiteBalanceAdjustmentController : PIAdjustmentController

@property (class, readonly, nonatomic) NSString *warmTempKey;
@property (class, readonly, nonatomic) NSString *warmTintKey;
@property (class, readonly, nonatomic) NSString *warmFaceKey;

@property (nonatomic) long long colorType;
@property (nonatomic) double faceStrength;
@property (nonatomic) double faceWarmth;
@property (nonatomic) double faceI;
@property (nonatomic) double faceQ;
@property (nonatomic) double grayStrength;
@property (nonatomic) double grayWarmth;
@property (nonatomic) double grayY;
@property (nonatomic) double grayI;
@property (nonatomic) double grayQ;
@property (nonatomic) double temperature;
@property (nonatomic) double tint;
@property (nonatomic) double warmTemp;
@property (nonatomic) double warmTint;
@property (nonatomic) BOOL warmFace;

+ (id)stringForColorType:(long long)a0;
+ (long long)colorTypeForString:(id)a0;
+ (id)colorTypeKey;
+ (id)faceStrengthKey;
+ (id)faceWarmthKey;
+ (id)faceIKey;
+ (id)faceQKey;
+ (id)grayStrengthKey;
+ (id)grayWarmthKey;
+ (id)grayYKey;
+ (id)grayIKey;
+ (id)grayQKey;
+ (id)temperatureKey;
+ (id)tintKey;

- (BOOL)canHaveAuto;

@end
