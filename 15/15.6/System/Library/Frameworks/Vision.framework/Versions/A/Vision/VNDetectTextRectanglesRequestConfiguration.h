@class NSString;

@interface VNDetectTextRectanglesRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) char reportCharacterBoxes;
@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) unsigned long long minimumCharacterPixelHeight;
@property (nonatomic) char detectDiacritics;
@property (nonatomic) char minimizeFalseDetections;
@property (copy, nonatomic) NSString *textRecognition;
@property (copy, nonatomic) NSString *additionalCharacters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithRequestClass:(Class)a0;

@end
