@class NSArray, NSDictionary, NSUUID, NSDate;

@interface ULDevicePredictionContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *coordinates;
@property (retain, nonatomic) NSArray *probabilityVector;
@property (retain, nonatomic) NSArray *imageIdentifiersVector;
@property (retain, nonatomic) NSArray *particles;
@property (retain, nonatomic) NSUUID *uniqueIdentifier;
@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) BOOL isMotionDetected;
@property (nonatomic) BOOL isPredictionValid;
@property (nonatomic) unsigned long long deviceClass;

+ (id)emptyPredictionContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 timestamp:(id)a1 isMotionDetected:(BOOL)a2 deviceClass:(unsigned long long)a3 coordinates:(id)a4 probabilityVector:(id)a5 imageIdentifiersVector:(id)a6 particles:(id)a7;
- (id)coordinateForFrame:(unsigned long long)a0 andSubmapIndex:(long long)a1;
- (BOOL)hasDirectionalContext;
- (BOOL)hasSpatialContext;
- (id)trackedCoordinateForFrame:(unsigned long long)a0;

@end
