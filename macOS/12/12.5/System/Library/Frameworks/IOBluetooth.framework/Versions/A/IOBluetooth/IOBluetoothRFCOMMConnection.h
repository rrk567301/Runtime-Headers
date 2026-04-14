@class NSMutableSet, IOBluetoothDevice;

@interface IOBluetoothRFCOMMConnection : IOBluetoothObject {
    unsigned int mMasterPort;
    NSMutableSet *mPendingChannels;
    struct IONotificationPort { } *mNotificationPort;
}

@property (retain) IOBluetoothDevice *device;

+ (id)getUniqueConnectionForDevice:(id)a0;
+ (id)getUniqueObjectDictionary:(BOOL)a0;
+ (id)getKeyForIOService:(unsigned int)a0;
+ (id)openOnDevice:(id)a0 doSyncronously:(BOOL)a1;
+ (id)openOnDeviceForFC:(id)a0 doSyncronously:(BOOL)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)getKey;
- (int)actOnNewConnection:(unsigned int)a0;
- (int)createNewFCChannel:(unsigned char)a0 channel:(id)a1;
- (int)createNewChannel:(unsigned char)a0 channel:(id)a1;
- (void)createNewFCConnection:(id)a0;
- (int)destroyChannel:(unsigned char)a0;

@end
