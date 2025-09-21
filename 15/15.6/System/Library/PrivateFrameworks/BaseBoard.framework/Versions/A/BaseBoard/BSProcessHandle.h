@class NSString, BSAuditToken, BSMachPortTaskNameRight;

@interface BSProcessHandle : NSObject <BSDescriptionProviding, BSXPCCoding, NSSecureCoding> {
    char _resolvedBundleID;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BSMachPortTaskNameRight *taskNameRight;
@property (readonly, copy, nonatomic) NSString *jobLabel;
@property (readonly, copy, nonatomic) NSString *bundlePath;
@property (readonly, nonatomic, getter=isValid) char valid;
@property (readonly, nonatomic) int pid;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BSAuditToken *auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)processHandle;
+ (id)processHandleForAuditToken:(id)a0;
+ (id)processHandleForAuditToken:(id)a0 bundleID:(id)a1;
+ (id)processHandleForNSXPCConnection:(id)a0;
+ (id)processHandleForPID:(int)a0;
+ (id)processHandleForPID:(int)a0 bundleID:(id)a1;
+ (id)processHandleForTaskNameRight:(id)a0;
+ (id)processHandleForTaskNameRight:(id)a0 bundleID:(id)a1;
+ (id)processHandleForXPCConnection:(id)a0;

- (void)dealloc;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForEntitlement:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (char)hasEntitlement:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
