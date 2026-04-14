@class NSObject;
@protocol OS_dispatch_queue;

@interface FPSupport_PowerStateSingleton : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQ;
    int notifyTokenPowerSource;
    int notifyTokenPrefsChange;
}

+ (id)sharedFPSupportPowerStateSingleton;

- (id)init;
- (void)postNotification;
- (void)_didChangePowerState:(id)a0;
- (void)dealloc;

@end
