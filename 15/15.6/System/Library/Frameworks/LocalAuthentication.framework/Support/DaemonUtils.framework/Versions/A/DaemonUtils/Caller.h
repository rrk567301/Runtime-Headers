@class NSData, NSString, NSXPCConnection;

@interface Caller : NSObject {
    NSString *_path;
}

@property (readonly, weak, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) unsigned int euid;
@property (readonly, nonatomic) int asid;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly, nonatomic) NSData *auditTokenData;
@property (readonly, nonatomic) NSString *path;

+ (id)current;
+ (id)pathFromPid:(int)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (char)hasEntitlement:(id)a0;
- (int)processId;
- (id)clientInfo;
- (unsigned int)userId;
- (char)isEqualToAuditToken:(struct { unsigned int x0[8]; })a0;
- (char)isEqualToAuditTokenData:(id)a0;

@end
