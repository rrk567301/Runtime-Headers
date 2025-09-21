@class NSString, NSMutableDictionary, NSMutableArray;

@interface ICRemoteCameraDeviceManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *remoteManagerConnections;
@property (retain, nonatomic) NSMutableArray *remoteCameraDevices;
@property (retain, nonatomic) NSMutableDictionary *osTransactions;
@property (nonatomic) BOOL systemDaemon;
@property (copy, nonatomic) NSString *managedObjectName;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } remoteManagerConnectionsLock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } remoteCameraDevicesLock;
@property (readonly, nonatomic) BOOL startDeviceNotifications;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)addRemoteCameraDevice:(id)a0 uuidString:(id)a1 deviceName:(id)a2;
- (void)addRemoteManagerConnection:(id)a0;
- (void)addSelectorToInterface:(id)a0 selectorString:(id)a1 origin:(BOOL)a2;
- (void)closeDevice:(id)a0;
- (void)ejectDevice:(id)a0 withReply:(id /* block */)a1;
- (id)initManaging:(id)a0 systemDaemon:(BOOL)a1;
- (void)notifyClientDeviceAdded:(id)a0 uuidString:(id)a1 deviceName:(id)a2;
- (void)notifyClientDeviceRemoved:(id)a0;
- (void)openDevice:(id)a0 withReply:(id /* block */)a1;
- (id)remoteDeviceForPrimaryIdentifier:(id)a0;
- (id)remoteDeviceForUUID:(id)a0;
- (BOOL)remoteManagerConnectionWithProcessIdentifierAuthorized:(int)a0;
- (BOOL)removeRemoteCameraDevice:(id)a0;
- (void)removeRemoteManagerConnectionWithProcessIdentifier:(int)a0;
- (void)requestDeviceListWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)updateRemoteManagerConnectionWithProcessIdentifier:(int)a0 authorized:(BOOL)a1;

@end
