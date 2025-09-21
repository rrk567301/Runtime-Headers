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

+ (id)processHandleForTaskNameRight:(id)a0;
+ (id)processHandle;
+ (id)processHandleForPID:(int)a0 bundleID:(id)a1;
+ (id)processHandleForAuditToken:(id)a0 bundleID:(id)a1;
+ (void)initialize;
+ (id)processHandleForTaskNameRight:(id)a0 bundleID:(id)a1;
+ (id)processHandleForAuditToken:(id)a0;
+ (id)processHandleForPID:(int)a0;
+ (id)processHandleForXPCConnection:(id)a0;
+ (id)processHandleForNSXPCConnection:(id)a0;

- (void)dealloc;
- (BOOL)hasEntitlement:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)init;
- (id)valueForEntitlement:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)membersForCoder;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
