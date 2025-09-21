@class NSXPCConnection;

@interface _DKXPCKnowledgeStore : NSObject <_DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeEventStreamDeleting, _DKKnowledgeSynchronizing>

@property (retain) NSXPCConnection *connection;

+ (id)XPCKnowledgeStore;
+ (id)XPCUserKnowledgeStore;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (id)initWithMachServiceName:(id)a0;
- (char)confirmConnectionWithError:(id *)a0;
- (unsigned long long)deleteAllEventsInEventStream:(id)a0 error:(id *)a1;
- (void)deleteAllEventsInEventStream:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (unsigned long long)deleteAllEventsInEventStream:(id)a0 synchronous:(char)a1 error:(id *)a2 responseQueue:(id)a3 withCompletion:(id /* block */)a4;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)a0 error:(id *)a1;
- (void)deleteAllEventsMatchingPredicate:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)a0 synchronous:(char)a1 error:(id *)a2 responseQueue:(id)a3 withCompletion:(id /* block */)a4;
- (char)deleteObjects:(id)a0 error:(id *)a1;
- (void)deleteObjects:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (id)deleteObjects:(id)a0 synchronous:(char)a1 responseQueue:(id)a2 withCompletion:(id /* block */)a3;
- (char)deleteRemoteState:(id *)a0;
- (id)deviceUUID;
- (void)disableSyncPolicyForFeature:(unsigned long long)a0 transportType:(long long)a1;
- (id)executeQuery:(id)a0 error:(id *)a1;
- (void)executeQuery:(id)a0 responseQueue:(id)a1;
- (void)executeQuery:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (id)executeQuery:(id)a0 synchronous:(char)a1 error:(id *)a2 responseQueue:(id)a3 withCompletion:(id /* block */)a4;
- (char)isSyncPolicyDisabledForFeature:(unsigned long long)a0 transportType:(long long)a1;
- (char)saveObjects:(id)a0 error:(id *)a1;
- (void)saveObjects:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (id)saveObjects:(id)a0 synchronous:(char)a1 responseQueue:(id)a2 withCompletion:(id /* block */)a3;
- (void)saveObjects:(id)a0 tracker:(id /* block */)a1 responseQueue:(id)a2 withCompletion:(id /* block */)a3;
- (id)sourceDeviceIdentityFromObject:(id)a0 error:(id *)a1;
- (id)sourceDeviceIdentityWithError:(id *)a0;
- (char)synchronizeWithError:(id *)a0;
- (char)synchronizeWithUrgency:(unsigned long long)a0 client:(id)a1 error:(id *)a2;
- (void)synchronizeWithUrgency:(unsigned long long)a0 client:(id)a1 responseQueue:(id)a2 completion:(id /* block */)a3;

@end
