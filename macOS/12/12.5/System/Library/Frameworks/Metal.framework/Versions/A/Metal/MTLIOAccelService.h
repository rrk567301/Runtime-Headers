@class MTLIOAccelDevice;
@protocol MTLDeviceSPI;

@interface MTLIOAccelService : NSObject {
    struct IONotificationPort { } *_notifyPort;
    unsigned int _notifyObject;
    MTLIOAccelDevice<MTLDeviceSPI> *_weakDevice;
    Class deviceClass;
}

@property (readonly) unsigned int acceleratorPort;
@property (readonly) unsigned long long registryID;

+ (void)registerService:(unsigned int)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)weakDevice;
- (id)initWithAcceleratorPort:(unsigned int)a0;
- (void)_safeEjectRequested;
- (void)_safeEjectCancelled;
- (void)_wasTerminated;

@end
