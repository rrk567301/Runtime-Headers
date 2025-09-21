@class NSXPCConnection;

@interface _DKXPCKnowledgeStore : NSObject <_DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeEventStreamDeleting, _DKKnowledgeSynchronizing>

@property (retain) NSXPCConnection *connection;

+ (id)XPCKnowledgeStore;
+ (id)XPCUserKnowledgeStore;

- (id)executeQuery:(id)a0 error:(id *)a1;
- (void)executeQuery:(id)a0 responseQueue:(id)a1;
- (BOOL)saveObjects:(id)a0 error:(id *)a1;
- (BOOL)deleteObjects:(id)a0 error:(id *)a1;
- (void)deleteAllEventsMatchingPredicate:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (id)initWithMachServiceName:(id)a0;
- (void)dealloc;
- (BOOL)isSyncPolicyDisabledForFeature:(unsigned long long)a0 transportType:(long long)a1;
- (void)disableSyncPolicyForFeature:(unsigned long long)a0 transportType:(long long)a1;
- (void)saveObjects:(id)a0 tracker:(id /* block */)a1 responseQueue:(id)a2 withCompletion:(id /* block */)a3;
- (id)initWithConnection:(id)a0;
- (unsigned long long)deleteAllEventsInEventStream:(id)a0 synchronous:(BOOL)a1 error:(id *)a2 responseQueue:(id)a3 withCompletion:(id /* block */)a4;
- (id)saveObjects:(id)a0 synchronous:(BOOL)a1 responseQueue:(id)a2 withCompletion:(id /* block */)a3;
- (BOOL)deleteRemoteState:(id *)a0;
- (BOOL)synchronizeWithError:(id *)a0;
- (id)sourceDeviceIdentityFromObject:(id)a0 error:(id *)a1;
- (BOOL)confirmConnectionWithError:(id *)a0;
- (id)deleteObjects:(id)a0 synchronous:(BOOL)a1 responseQueue:(id)a2 withCompletion:(id /* block */)a3;
- (id)init;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)a0 synchronous:(BOOL)a1 error:(id *)a2 responseQueue:(id)a3 withCompletion:(id /* block */)a4;
- (void)executeQuery:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (void)saveObjects:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (void)deleteAllEventsInEventStream:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (void)deleteObjects:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (id)deviceUUID;
- (BOOL)synchronizeWithUrgency:(unsigned long long)a0 client:(id)a1 error:(id *)a2;
- (void)synchronizeWithUrgency:(unsigned long long)a0 client:(id)a1 responseQueue:(id)a2 completion:(id /* block */)a3;
- (id)sourceDeviceIdentityWithError:(id *)a0;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (unsigned long long)deleteAllEventsInEventStream:(id)a0 error:(id *)a1;
- (id)executeQuery:(id)a0 synchronous:(BOOL)a1 error:(id *)a2 responseQueue:(id)a3 withCompletion:(id /* block */)a4;

@end
