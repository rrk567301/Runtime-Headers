@interface SLSBridgedWindowManagementOperationProcessIdentifierResult : SLSBridgedWindowManagementOperationResult

@property (readonly) int processIdentifier;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProcessIdentifier:(int)a0;

@end
