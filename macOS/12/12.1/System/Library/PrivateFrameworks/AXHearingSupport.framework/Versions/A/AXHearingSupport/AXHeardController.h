@class NSMutableArray, NSMutableDictionary;

@interface AXHeardController : NSObject

@property (retain, nonatomic) NSMutableArray *clients;
@property (retain, nonatomic) NSMutableDictionary *handlers;

+ (id)sharedServer;
+ (id)entitlementsForMessageID:(unsigned long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)handleNewConnection:(id)a0;
- (void)startServer;
- (void)sendUpdateMessage:(id)a0 forIdentifier:(unsigned long long)a1;
- (BOOL)sendMessage:(id)a0 withError:(id *)a1;
- (void)sendClientsMessageWithPayload:(id)a0 excluding:(id)a1;
- (void)addHandler:(id)a0 andBlock:(id /* block */)a1 forMessageIdentifier:(unsigned long long)a2;
- (BOOL)connection:(id)a0 hasEntitlementForMessage:(unsigned long long)a1;
- (void)handleMessage:(id)a0 forIdentifier:(unsigned long long)a1;
- (unsigned long long)countOfClientsListeningForIdentifier:(unsigned long long)a0;
- (void)registerFakeClient:(id)a0;

@end
