@interface LACMutableXPCClient : LACXPCClient

@property (nonatomic) BOOL bypassEntitlement;

- (void)setAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)setProcessId:(int)a0;
- (id)init;
- (void)setUserId:(unsigned int)a0;
- (void)setAuditSessionId:(int)a0;

@end
