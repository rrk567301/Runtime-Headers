@interface SLSBridgedWindowManagementOperationFloatResult : SLSBridgedWindowManagementOperationResult

@property (readonly) float floatValue;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFloatValue:(float)a0;

@end
