@class NSString;

@interface GCGenericDeviceDataRumbleMotorValueExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly, copy) NSString *motorName;

+ (BOOL)supportsSecureCoding;
+ (id)description;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
