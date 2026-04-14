@class NSMutableDictionary, NSMutableArray;

@interface HIDRemoteEndpoint : NSObject {
    NSMutableDictionary *_devices;
    NSMutableArray *_prevDeviceLog;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
}

@property unsigned long long endpointID;
@property unsigned char primarySide;

- (id)initWithID:(unsigned long long)a0;
- (id)devices;
- (void)addDevice:(id)a0;
- (void).cxx_destruct;
- (void)removeAllDevices;
- (void)removeDeviceID:(unsigned long long)a0;
- (id)_removeDeviceID:(unsigned long long)a0;
- (id)copyState;
- (id)getDevice:(unsigned long long)a0;
- (void)logRemovedDevice:(id)a0;

@end
