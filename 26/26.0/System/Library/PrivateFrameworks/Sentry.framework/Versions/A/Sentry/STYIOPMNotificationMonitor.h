@class NSObject;
@protocol STYIOPMNotificationDelegate, OS_dispatch_queue;

@interface STYIOPMNotificationMonitor : NSObject {
    struct __IOPMConnection { } *_connectionToIOPM;
    unsigned long long _eventTimestamps[3];
    BOOL _receivedEarlyNotification[3];
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

@property (weak, nonatomic) id<STYIOPMNotificationDelegate> delegate;

- (void)dealloc;
- (id)init;
- (BOOL)_startMonitoring;
- (void).cxx_destruct;
- (void)_handleEvent:(unsigned int)a0 ofType:(unsigned long long)a1;
- (void)_sendEventNotification:(unsigned long long)a0;
- (void)iopmEvent:(unsigned int)a0;

@end
