@class NSString, NSSet, NSDate;

@interface IRMiloLslPredictionDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *predictionId;
@property (readonly, nonatomic) long long miLoServiceQuality;
@property (readonly, nonatomic) long long miLoServiceQualityReasonBitmap;
@property (readonly, nonatomic) NSSet *scores;
@property (readonly, nonatomic) NSSet *nearbyDevices;
@property (readonly, nonatomic) NSDate *predictionTime;
@property (readonly, nonatomic) long long confidence;
@property (readonly, nonatomic) long long confidenceReasonBitmap;

+ (id)miloLslPredictionDOWithPredictionId:(id)a0 miLoServiceQuality:(long long)a1 miLoServiceQualityReasonBitmap:(long long)a2 scores:(id)a3 nearbyDevices:(id)a4 predictionTime:(id)a5 confidence:(long long)a6 confidenceReasonBitmap:(long long)a7;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)canUse;
- (char)canLabel;
- (id)copyWithReplacementConfidence:(long long)a0;
- (id)copyWithReplacementConfidenceReasonBitmap:(long long)a0;
- (id)copyWithReplacementMiLoServiceQuality:(long long)a0;
- (id)copyWithReplacementMiLoServiceQualityReasonBitmap:(long long)a0;
- (id)copyWithReplacementNearbyDevices:(id)a0;
- (id)copyWithReplacementPredictionId:(id)a0;
- (id)copyWithReplacementPredictionTime:(id)a0;
- (id)copyWithReplacementScores:(id)a0;
- (id)exportAsDictionary;
- (id)initWithPredictionId:(id)a0 miLoServiceQuality:(long long)a1 miLoServiceQualityReasonBitmap:(long long)a2 scores:(id)a3 nearbyDevices:(id)a4 predictionTime:(id)a5 confidence:(long long)a6 confidenceReasonBitmap:(long long)a7;
- (char)isEqualToMiloLslPredictionDO:(id)a0;
- (char)isInMotion;
- (char)isTemporarilyUnavailable;
- (double)scoreForPredictionId:(id)a0 andLabel:(id)a1;

@end
