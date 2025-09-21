@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface UVCExtensionSystemPreferredDeviceManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_deviceListByUUID;
}

+ (id)sharedInstance;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)registerDeviceUID:(id)a0;
- (void)setSystemPreferred:(BOOL)a0 forDeviceUID:(id)a1;
- (void)unRegisterDeviceUID:(id)a0;

@end
