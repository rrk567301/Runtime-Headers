@interface SLSBridgedWindowManagementOperationBoolResult : SLSBridgedWindowManagementOperationResult

@property (readonly) BOOL boolValue;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBoolValue:(BOOL)a0;

@end
