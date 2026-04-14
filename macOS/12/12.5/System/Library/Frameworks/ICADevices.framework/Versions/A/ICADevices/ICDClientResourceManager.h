@class NSMutableArray;

@interface ICDClientResourceManager : NSObject {
    BOOL _clientAdded;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientResourcesLock;
    id _delegate;
}

@property (retain) NSMutableArray *clientResources;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (unsigned int)currentClientCount;
- (void)sendMessage:(id)a0 withConnection:(id)a1;
- (void)sendMessage:(id)a0 forClientWithPID:(id)a1;
- (id)clientUsingDevice;
- (void)setClientWithPID:(id)a0 usingDevice:(BOOL)a1;
- (id)clientsInterestedInNotification:(id)a0;
- (void)addNewClientResourceConnection:(id)a0;
- (void)addNotificationsToClientWithPID:(id)a0 fromNoteDictionary:(id)a1;
- (void)remNotificationsFromClientWithPID:(id)a0 withNoteDictionary:(id)a1;
- (void)setCallbackInfo:(id)a0 forClientWithPID:(id)a1 andTransactionID:(id)a2;
- (unsigned int)invalidateAndRemoveClientWithPID:(id)a0;
- (void)invalidateAllClients;
- (id)findClientResourceWithPID:(id)a0;
- (id)clientResourcesArray;

@end
