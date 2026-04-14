@interface SLSBridgedWindowManagementOperationWorkspaceTypeResult : SLSBridgedWindowManagementOperationResult

@property (readonly) int workspaceType;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithWorkspaceType:(int)a0;

@end
