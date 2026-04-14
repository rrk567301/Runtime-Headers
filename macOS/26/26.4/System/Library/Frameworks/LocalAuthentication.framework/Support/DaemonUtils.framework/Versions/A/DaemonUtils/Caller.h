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

- (id)clientInfo;
- (BOOL)isEqual:(id)a0;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (unsigned int)userId;
- (unsigned long long)hash;
- (int)processId;
- (BOOL)hasEntitlement:(id)a0;
- (id)description;
- (BOOL)isEqualToAuditToken:(struct { unsigned int x0[8]; })a0;
- (BOOL)isEqualToAuditTokenData:(id)a0;

@end
