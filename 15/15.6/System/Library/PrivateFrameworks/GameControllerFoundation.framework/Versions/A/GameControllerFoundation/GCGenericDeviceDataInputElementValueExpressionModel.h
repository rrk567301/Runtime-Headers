@class NSString;

@interface GCGenericDeviceDataInputElementValueExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly, copy) NSString *elementIdentifier;
@property (readonly) long long scaleType;

+ (id)description;
+ (char)supportsSecureCoding;

- (id)debugDescription;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id /* block */)buildExpressionWithContext:(id)a0 error:(out id *)a1;
- (id)buildReactiveExpressionWithContext:(id)a0 consumer:(id /* block */)a1 error:(out id *)a2;

@end
