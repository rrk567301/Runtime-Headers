@class NSString, BSAuditToken, BSMachPortTaskNameRight;

@interface BSProcessHandle : NSObject <BSXPCAutoCoding, BSDescriptionProviding> {
    BOOL _resolvedBundleID;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BSMachPortTaskNameRight *taskNameRight;
@property (readonly, copy, nonatomic) NSString *jobLabel;
@property (readonly, copy, nonatomic) NSString *bundlePath;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) int pid;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BSAuditToken *auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)processHandle;
+ (void)initialize;
+ (id)processHandleForAuditToken:(id)a0;
+ (id)processHandleForPID:(int)a0 bundleID:(id)a1;
+ (id)processHandleForTaskNameRight:(id)a0;
+ (id)processHandleForNSXPCConnection:(id)a0;
+ (id)processHandleForXPCConnection:(id)a0;
+ (id)processHandleForTaskNameRight:(id)a0 bundleID:(id)a1;
+ (id)processHandleForPID:(int)a0;
+ (id)processHandleForAuditToken:(id)a0 bundleID:(id)a1;

- (id)valueForEntitlement:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)hasEntitlement:(id)a0;
- (id)membersForCoder;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
