@class NSLock, NSMutableDictionary;

@interface AFHearablesClientRegistry : NSObject

@property (retain, nonatomic) NSMutableDictionary *clientRegistrations;
@property (retain, nonatomic) NSMutableDictionary *contextToClientKeys;
@property (retain, nonatomic) NSLock *registryLock;

- (id)allClients;
- (void).cxx_destruct;
- (id)init;
- (void)_cleanupClientRegistration:(id)a0;
- (void)_enumerateIndividualGestureContexts:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)_updateContextToClientsMapping:(unsigned long long)a0 forClientKey:(id)a1 shouldAdd:(BOOL)a2;
- (void)addGestureObserver:(id)a0 forContexts:(unsigned long long)a1 queue:(id)a2;
- (unsigned long long)aggregatedContexts;
- (void)cleanupStaleClients;
- (id)clientsInterestedInContexts:(unsigned long long)a0;
- (BOOL)hasClientsForContexts:(unsigned long long)a0;
- (void)removeGestureObserver:(id)a0;
- (void)removeGestureObserver:(id)a0 forContexts:(unsigned long long)a1;

@end
