@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceMotionEventDriverModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) GCGenericDeviceDataProcessorExpressionModel *accelerometerXExpression;
@property (readonly, copy) GCGenericDeviceDataProcessorExpressionModel *accelerometerYExpression;
@property (readonly, copy) GCGenericDeviceDataProcessorExpressionModel *accelerometerZExpression;
@property (readonly, copy) GCGenericDeviceDataProcessorExpressionModel *gyroXExpression;
@property (readonly, copy) GCGenericDeviceDataProcessorExpressionModel *gyroYExpression;
@property (readonly, copy) GCGenericDeviceDataProcessorExpressionModel *gyroZExpression;

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)a0 error:(out id *)a1;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
