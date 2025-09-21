@class NSString;

@interface GCGenericDeviceDataRumbleMotorValueExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly, copy) NSString *motorName;

+ (id)description;
+ (char)supportsSecureCoding;

- (id)debugDescription;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;

@end
