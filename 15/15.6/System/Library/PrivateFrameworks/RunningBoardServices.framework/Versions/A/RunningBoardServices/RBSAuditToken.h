@class NSString;

@interface RBSAuditToken : NSObject <RBSXPCSecureCoding, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) int pidversion;
@property (readonly, nonatomic) struct { unsigned int val[8]; } realToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tokenFromAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)tokenFromAuditTokenRef:(struct { unsigned int x0[8]; } *)a0;
+ (id)tokenFromXPCConnection:(id)a0;
+ (char)supportsRBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)pid;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;

@end
