@class NSArray, NSString, NSXPCConnection, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TKSmartCardSlotManager : NSObject <TKProtocolSlotClientNotification, TKSmartCardSlotNFCManaging> {
    NSXPCConnection *_connection;
    NSMutableDictionary *_endpoints;
    NSArray *_slotNames;
    NSObject<OS_dispatch_queue> *_slotNamesQueue;
    NSArray *_nfcAppIdentifiers;
    id /* block */ _connectionToServer;
    int _notifyToken;
}

@property (class, readonly) TKSmartCardSlotManager *defaultManager;

@property (readonly) NSArray *slotNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)setupConnection;
- (void)dealloc;
- (id)init;
- (id)initWithServer:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_createAIDsValidationError;
- (void)createNFCSlotWithMessage:(id)a0 completion:(id /* block */)a1;
- (BOOL)endNFCSlotWithError:(id *)a0;
- (void)getSlotWithName:(id)a0 reply:(id /* block */)a1;
- (id)getValidAIDsFromCallingBundle;
- (BOOL)isNFCSupported;
- (void)setNFCAllowedAIDs:(id)a0;
- (void)setSlotWithName:(id)a0 endpoint:(id)a1 type:(id)a2 reply:(id /* block */)a3;
- (id)slotNamed:(id)a0;
- (id)synchronous:(BOOL)a0 remoteSlotClientWithErrorHandler:(id /* block */)a1;
- (BOOL)updateNFCSlotMessageWithMessage:(id)a0 error:(id *)a1;

@end
