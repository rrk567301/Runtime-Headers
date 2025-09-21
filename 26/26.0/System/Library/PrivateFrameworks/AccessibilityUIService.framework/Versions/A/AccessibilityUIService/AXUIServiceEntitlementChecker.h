@class NSMutableArray;

@interface AXUIServiceEntitlementChecker : NSObject

@property (nonatomic) Class serviceClass;
@property (retain, nonatomic) NSMutableArray *clientConnections;
@property (retain, nonatomic) NSMutableArray *entitlementsCaches;

- (id)initWithServiceClass:(Class)a0;
- (void)clientConnectionWillBeTerminated:(id)a0;
- (void)dealloc;
- (BOOL)_isSafeToProcessMessageFromUnentitledProcessWithIdentifier:(long long)a0;
- (id)_possibleRequiredEntitlementForMessageWithIdentifier:(long long)a0;
- (BOOL)_clientProcessWithAuditToken:(struct { unsigned int x0[8]; } *)a0 hasEntitlement:(id)a1;
- (id)_singleRequiredEntitlementForMessageWithIdentifier:(long long)a0;
- (BOOL)serviceCanProcessMessageWithIdentifier:(long long)a0 fromClientWithConnection:(id)a1 possibleRequiredEntitlements:(id *)a2 needsToRequireEntitlements:(BOOL *)a3;
- (unsigned long long)_indexOfClientConnection:(id)a0;
- (void).cxx_destruct;

@end
