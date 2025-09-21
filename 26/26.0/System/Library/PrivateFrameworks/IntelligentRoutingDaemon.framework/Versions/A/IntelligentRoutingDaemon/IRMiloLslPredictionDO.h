@class NSString, NSSet, NSDate;

@interface IRMiloLslPredictionDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *predictionId;
@property (readonly, nonatomic) BOOL isPredictionValid;
@property (readonly, nonatomic) BOOL isMapValid;
@property (readonly, nonatomic) BOOL isMotionDetected;
@property (readonly, nonatomic) NSSet *scores;
@property (readonly, nonatomic) NSDate *predictionTime;

+ (id)miloLslPredictionDOWithPredictionId:(id)a0 isPredictionValid:(BOOL)a1 isMapValid:(BOOL)a2 isMotionDetected:(BOOL)a3 scores:(id)a4 predictionTime:(id)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)canUse;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)canLabel;
- (id)copyWithReplacementIsMapValid:(BOOL)a0;
- (id)copyWithReplacementIsMotionDetected:(BOOL)a0;
- (id)copyWithReplacementIsPredictionValid:(BOOL)a0;
- (id)copyWithReplacementPredictionId:(id)a0;
- (id)copyWithReplacementPredictionTime:(id)a0;
- (id)copyWithReplacementScores:(id)a0;
- (id)exportAsDictionary;
- (id)initWithPredictionId:(id)a0 isPredictionValid:(BOOL)a1 isMapValid:(BOOL)a2 isMotionDetected:(BOOL)a3 scores:(id)a4 predictionTime:(id)a5;
- (BOOL)isEqualToMiloLslPredictionDO:(id)a0;
- (BOOL)isTemporarilyUnavailable;
- (id)scoreForPredictionEventEvent:(id)a0;

@end
