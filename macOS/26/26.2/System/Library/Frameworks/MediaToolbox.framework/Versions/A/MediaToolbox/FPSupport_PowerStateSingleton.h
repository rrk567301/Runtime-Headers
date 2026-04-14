@class NSObject;
@protocol OS_dispatch_queue;

@interface FPSupport_PowerStateSingleton : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQ;
    int notifyTokenPowerSource;
    int notifyTokenPrefsChange;
}

+ (id)sharedFPSupportPowerStateSingleton;

- (void)_didChangePowerState:(id)a0;
- (id)init;
- (void)postNotification;
- (void)dealloc;

@end
