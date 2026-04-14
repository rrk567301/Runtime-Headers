@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceRumbleOutputFieldModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) GCGenericDeviceDataProcessorExpressionModel *valueExpression;
@property (readonly, copy) GCGenericDeviceDataProcessorExpressionModel *offsetExpression;
@property (readonly, copy) GCGenericDeviceDataProcessorExpressionModel *sizeExpression;

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)a0 error:(out id *)a1;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
