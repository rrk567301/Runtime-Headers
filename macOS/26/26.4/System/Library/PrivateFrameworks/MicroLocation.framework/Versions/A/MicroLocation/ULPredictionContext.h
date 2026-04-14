@class NSUUID, NSMutableDictionary, NSDate;

@interface ULPredictionContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *devicePredictions;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) BOOL isMotionDetected;
@property (readonly, nonatomic) BOOL isPredictionValid;

+ (id)emptyPredictionContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)airPodsPrediction;
- (id)copyUpdatingDevicePredictionContext:(id)a0;
- (id)devicePredictionContextForDeviceClass:(unsigned long long)a0;
- (BOOL)hasDirectionalContext;
- (BOOL)hasSpatialContext;
- (id)initWithDevicePredictions:(id)a0;
- (id)mainDevicePrediction;
- (id)newestDevicePrediction;
- (id)trackedCoordinateInSelfFrameForDeviceClass:(unsigned long long)a0;
- (void)updateDevicePredictionContext:(id)a0;

@end
