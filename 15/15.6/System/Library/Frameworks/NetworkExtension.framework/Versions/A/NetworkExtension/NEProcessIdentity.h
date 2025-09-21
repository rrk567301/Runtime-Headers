@class NSUUID, NSData;

@interface NEProcessIdentity : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) int pidVersion;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSData *auditTokenData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initFromXPCConnection:(id)a0;
- (id)initFromXPCMessage:(id)a0;

@end
