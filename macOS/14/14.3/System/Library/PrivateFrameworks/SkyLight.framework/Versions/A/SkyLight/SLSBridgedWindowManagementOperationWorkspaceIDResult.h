@interface SLSBridgedWindowManagementOperationWorkspaceIDResult : SLSBridgedWindowManagementOperationResult

@property (readonly) unsigned int workspaceID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWorkspaceID:(unsigned int)a0;

@end
