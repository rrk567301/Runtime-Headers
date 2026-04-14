@class NSString;

@interface GCGenericDeviceDataRumbleMotorValueExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly, copy) NSString *motorName;

+ (BOOL)supportsSecureCoding;
+ (id)description;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)redactedDescription;
- (id)initWithCoder:(id)a0;

@end
