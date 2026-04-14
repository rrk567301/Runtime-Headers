@class NSString;

@interface AMActionInWorkflowXPCToken : AMXPCToken

@property (retain) NSString *actionUUID;

+ (BOOL)supportsSecureCoding;

- (id)initWithUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_am_convertFromXPCWithWorkflow:(id)a0;

@end
