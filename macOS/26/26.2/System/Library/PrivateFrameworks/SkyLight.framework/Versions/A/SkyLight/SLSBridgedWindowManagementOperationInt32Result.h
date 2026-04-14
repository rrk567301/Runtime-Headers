@interface SLSBridgedWindowManagementOperationInt32Result : SLSBridgedWindowManagementOperationResult

@property (readonly) int int32Value;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithInt32Value:(int)a0;

@end
