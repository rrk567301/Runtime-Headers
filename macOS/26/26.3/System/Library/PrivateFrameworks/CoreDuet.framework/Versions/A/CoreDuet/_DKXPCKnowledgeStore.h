@class NSXPCConnection;

@interface _DKXPCKnowledgeStore : NSObject <_DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeEventStreamDeleting, _DKKnowledgeSynchronizing>

@property (retain) NSXPCConnection *connection;

+ (id)XPCKnowledgeStore;
+ (id)XPCUserKnowledgeStore;

- (id)sourceDeviceIdentityWithError:(id *)a0;
- (void)disableSyncPolicyForFeature:(unsigned long long)a0 transportType:(long long)a1;
- (id)initWithMachServiceName:(id)a0;
- (BOOL)saveObjects:(id)a0 error:(id *)a1;
- (void)deleteAllEventsInEventStream:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (id)deviceUUID;
- (id)deleteObjects:(id)a0 synchronous:(BOOL)a1 responseQueue:(id)a2 withCompletion:(id /* block */)a3;
- (void)deleteObjects:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (unsigned long long)deleteAllEventsInEventStream:(id)a0 synchronous:(BOOL)a1 error:(id *)a2 responseQueue:(id)a3 withCompletion:(id /* block */)a4;
- (id)sourceDeviceIdentityFromObject:(id)a0 error:(id *)a1;
- (BOOL)deleteRemoteState:(id *)a0;
- (id)executeQuery:(id)a0 error:(id *)a1;
- (id)init;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)a0 error:(id *)a1;
- (void)deleteAllEventsMatchingPredicate:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)isSyncPolicyDisabledForFeature:(unsigned long long)a0 transportType:(long long)a1;
- (BOOL)confirmConnectionWithError:(id *)a0;
- (void)saveObjects:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (id)initWithConnection:(id)a0;
- (BOOL)synchronizeWithError:(id *)a0;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)a0 synchronous:(BOOL)a1 error:(id *)a2 responseQueue:(id)a3 withCompletion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)executeQuery:(id)a0 synchronous:(BOOL)a1 error:(id *)a2 responseQueue:(id)a3 withCompletion:(id /* block */)a4;
- (BOOL)synchronizeWithUrgency:(unsigned long long)a0 client:(id)a1 error:(id *)a2;
- (void)dealloc;
- (void)executeQuery:(id)a0 responseQueue:(id)a1;
- (id)saveObjects:(id)a0 synchronous:(BOOL)a1 responseQueue:(id)a2 withCompletion:(id /* block */)a3;
- (void)saveObjects:(id)a0 tracker:(id /* block */)a1 responseQueue:(id)a2 withCompletion:(id /* block */)a3;
- (BOOL)deleteObjects:(id)a0 error:(id *)a1;
- (void)executeQuery:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (unsigned long long)deleteAllEventsInEventStream:(id)a0 error:(id *)a1;
- (void)synchronizeWithUrgency:(unsigned long long)a0 client:(id)a1 responseQueue:(id)a2 completion:(id /* block */)a3;

@end
