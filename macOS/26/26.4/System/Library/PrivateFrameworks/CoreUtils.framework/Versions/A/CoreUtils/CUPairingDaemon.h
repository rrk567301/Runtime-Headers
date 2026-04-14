@class NSXPCListenerEndpoint, NSString, NSXPCListener, NSData, NSMutableSet, NSObject, CUHomeKitManager;
@protocol OS_dispatch_queue;

@interface CUPairingDaemon : NSObject <NSXPCListenerDelegate> {
    CUHomeKitManager *_homeKitManager;
    int _rpIdentityNotifier;
    NSData *_rpSelfIRK;
    unsigned long long _stateHandle;
    NSMutableSet *_xpcConnections;
    NSXPCListener *_xpcListener;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (nonatomic) BOOL testMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPairingDaemon;

- (id)detailedDescription;
- (void)activate;
- (id)findPairedPeer:(id)a0 options:(unsigned long long)a1 error:(int *)a2;
- (id)_copyHomeKitWithOptions:(unsigned long long)a0 error:(int *)a1;
- (id)_copyHomeKitLocalPairingIDWithOptions:(unsigned long long)a0 error:(int *)a1;
- (id)initStandalone;
- (int)_removePairedPeer:(id)a0 options:(unsigned long long)a1 removeAdminAllowed:(BOOL)a2;
- (int)deleteIdentityWithOptions:(unsigned long long)a0;
- (id)_copyHomeKitExWithOptions:(unsigned long long)a0 error:(int *)a1;
- (id)_copyHomeKitWithOptionsHAP:(unsigned long long)a0 error:(int *)a1;
- (void)_invalidate;
- (void)_rpIdentityUpdate;
- (id)_copyPairedPeersWithOptions:(unsigned long long)a0 error:(int *)a1;
- (int)_savePairedPeer:(id)a0 options:(unsigned long long)a1 removeAdminAllowed:(BOOL)a2;
- (void).cxx_destruct;
- (void)invalidate;
- (int)removePairedPeer:(id)a0 options:(unsigned long long)a1;
- (id)_findPairedPeer:(id)a0 options:(unsigned long long)a1 error:(int *)a2;
- (id)_copyIdentityWithOptions:(unsigned long long)a0 error:(int *)a1;
- (void)getIdentityWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)reset;
- (id)init;
- (void)_connectionInvalidated:(id)a0;
- (void)_activate;
- (id)copyIdentityWithOptions:(unsigned long long)a0 error:(int *)a1;
- (int)_deleteIdentityWithOptions:(unsigned long long)a0;
- (id)copyPairedPeersWithOptions:(unsigned long long)a0 error:(int *)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)_copyOrCreateWithOptions:(unsigned long long)a0 error:(int *)a1;
- (void)_removeDups:(id)a0;
- (int)removePairedPeer:(id)a0 options:(unsigned long long)a1 removeAdminAllowed:(BOOL)a2;
- (void)dealloc;
- (id)_findHomeKitExPairedPeer:(id)a0 options:(unsigned long long)a1 error:(int *)a2;
- (int)savePairedPeer:(id)a0 options:(unsigned long long)a1 removeAdminAllowed:(BOOL)a2;
- (int)_saveIdentity:(id)a0 options:(unsigned long long)a1;
- (id)_copyHomeKitWithOptionsKeychain:(unsigned long long)a0 error:(int *)a1;
- (id)_findHomeKitPairedPeer:(id)a0 options:(unsigned long long)a1 error:(int *)a2;
- (int)savePairedPeer:(id)a0 options:(unsigned long long)a1;

@end
