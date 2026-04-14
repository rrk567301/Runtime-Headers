@class NSString, RBSMachPort, RBSAuditToken;

@interface RBSMachPortTaskNameRight : NSObject <RBSXPCSecureCoding, NSSecureCoding, NSCopying> {
    RBSMachPort *_port;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) RBSAuditToken *auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskNameForPID:(int)a0;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)portForSelf;

- (void)invalidate;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isUsable;
- (unsigned int)port;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
