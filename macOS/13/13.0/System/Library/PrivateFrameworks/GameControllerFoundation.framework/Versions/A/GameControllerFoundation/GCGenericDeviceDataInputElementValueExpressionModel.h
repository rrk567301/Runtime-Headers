@class NSString;

@interface GCGenericDeviceDataInputElementValueExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly, copy) NSString *elementIdentifier;
@property (readonly) long long scaleType;

+ (id)description;
+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
