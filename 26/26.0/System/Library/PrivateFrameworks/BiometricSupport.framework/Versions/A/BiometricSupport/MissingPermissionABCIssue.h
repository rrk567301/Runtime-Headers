@interface MissingPermissionABCIssue : EntitlementABCIssue

@property (nonatomic) int permission;

+ (void)reportPermission:(int)a0 client:(id)a1 processName:(id)a2 clientUUID:(id)a3 platform:(id)a4 forReporter:(id)a5;

- (id)tag;
- (id)context;
- (unsigned long long)abcReason;
- (id)initWithPermission:(int)a0 client:(id)a1 processName:(id)a2 clientUUID:(id)a3 platform:(id)a4 forReporter:(id)a5;

@end
