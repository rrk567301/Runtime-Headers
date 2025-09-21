@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CMMotionAlarmManagerInternal : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSMutableDictionary *fAlarms;
    char fListening;
}

+ (id)instance;

- (void)dealloc;
- (id)init;
- (void)_teardown;
- (void)_startListeners;
- (char)_acknowledgeAlarm:(id)a0 error:(id *)a1;
- (void)_handleAlarmFire:(id)a0;
- (char)_launchRemoteAppWithError:(id *)a0 delegate:(id)a1;
- (char)_registerAlarm:(id)a0 error:(id *)a1;
- (void)_stopListeners;
- (char)_unregisterAlarm:(id)a0 error:(id *)a1;

@end
