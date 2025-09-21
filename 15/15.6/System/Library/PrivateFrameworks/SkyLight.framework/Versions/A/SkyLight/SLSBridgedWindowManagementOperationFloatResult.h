@interface SLSBridgedWindowManagementOperationFloatResult : SLSBridgedWindowManagementOperationResult

@property (readonly) float floatValue;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFloatValue:(float)a0;

@end
