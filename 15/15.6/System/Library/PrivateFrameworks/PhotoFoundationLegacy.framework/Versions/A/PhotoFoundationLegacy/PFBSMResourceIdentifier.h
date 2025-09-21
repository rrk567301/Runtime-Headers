@class NSString, PFWeakHash, NSObject;

@interface PFBSMResourceIdentifier : NSObject <PFWeakHashDelegate> {
    PFWeakHash *_clients;
    unsigned long long _clientCount;
    unsigned long long _clientsMutationCounter;
    int _status;
    char _clientsAddedDuringShutdown;
}

@property (copy) id /* block */ shutdownComplete;
@property (readonly, weak) NSObject *resource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithResource:(id)a0;
- (void)shutdownWithCompletion:(id /* block */)a0;
- (void)_bumpMutationCounterForClient:(id)a0;
- (char)_canAddClient:(char)a0;
- (id)_clientsBlockingShutdown;
- (void)_noMoreClients;
- (void)_reportUnresponsiveClients:(long long)a0;
- (char)_showUserNotificationForUnresponsiveClients;
- (char)addClient:(id)a0 isToken:(char)a1;
- (char)clientIsRegistered:(id)a0;
- (id)clientListForLog;
- (void)removeClient:(id)a0 isToken:(char)a1;
- (void)removeClientCompletely:(id)a0;
- (void)tattleOnUnresponsiveClients;
- (void)tryResourceShutdownIgnoringClients:(id)a0 whenComplete:(id /* block */)a1;
- (void)weakHashBecameEmpty:(id)a0;

@end
