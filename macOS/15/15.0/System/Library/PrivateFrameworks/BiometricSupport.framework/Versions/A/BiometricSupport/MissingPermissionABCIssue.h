@interface MissingPermissionABCIssue : EntitlementABCIssue

@property (nonatomic) int permission;

+ (void)reportPermission:(int)a0 client:(id)a1 forReporter:(id)a2;

- (id)context;
- (id)tag;
- (unsigned long long)abcReason;
- (id)initWithPermission:(int)a0 client:(id)a1 forReporter:(id)a2;

@end
