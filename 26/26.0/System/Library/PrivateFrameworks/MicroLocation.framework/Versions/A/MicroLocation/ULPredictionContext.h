@class NSUUID, NSArray, NSDate;

@interface ULPredictionContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uniqueIdentifier;
@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) BOOL isMotionDetected;
@property (nonatomic) void /* unknown type, empty encoding */ coordinates;
@property (retain, nonatomic) NSArray *probabilityVector;
@property (retain, nonatomic) NSArray *imageIdentifiersVector;
@property (retain, nonatomic) NSArray *particles;
@property (readonly, nonatomic) BOOL isPredictionValid;

+ (id)emptyPredictionContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUniqueIdentifier:(SEL)a0 timestamp:(id)a1 isMotionDetected:(id)a2 coordinates:(BOOL)a3 probabilityVector:(id)a4 imageIdentifiersVector:(id)a5 particles:(id)a6;
- (void)setCoordinatesForTesting:(SEL)a0;

@end
