@interface SLSBridgedWindowManagementOperationProcessIdentifierResult : SLSBridgedWindowManagementOperationResult

@property (readonly) int processIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithProcessIdentifier:(int)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
