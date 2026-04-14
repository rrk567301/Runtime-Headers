@class NSArray, AVWeakReference, NSMutableArray;

@interface AVExternalSyncDeviceDiscoverySession : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _deviceLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sourceLock;
    NSMutableArray *_devices;
    AVWeakReference *_weakReference;
}

@property (class, readonly) AVExternalSyncDeviceDiscoverySession *sharedSession;
@property (class, readonly, getter=isSupported) BOOL supported;

@property (readonly) NSArray *devices;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
