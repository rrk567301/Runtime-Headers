@class NSObject;
@protocol OS_dispatch_queue;

@interface FigCaptureSystemStatus : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct IONotificationPort { } *_ioNotificationPort;
    unsigned int _serviceNotification;
    _Atomic unsigned long long _systemState;
    struct IONotificationPort { } *_powerNotificationPort;
    unsigned int _powerNotifier;
    unsigned int _powerNotifierConnect;
}

@property (readonly) unsigned long long systemState;

+ (id)sharedInstance;
+ (void)initialize;
+ (BOOL)clamshellIsClosed;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)_setupClamshellStateChangeHandler;
- (void)_setupPowerStateChangeHandler;
- (void)clamshellStateChangeHandler:(BOOL)a0;
- (void)powerStateChangeHandler:(unsigned long long)a0 args:(void *)a1;

@end
