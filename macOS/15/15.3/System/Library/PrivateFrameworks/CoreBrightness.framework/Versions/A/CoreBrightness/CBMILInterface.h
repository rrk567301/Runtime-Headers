@class NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface CBMILInterface : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct IONotificationPort { } *_ioNotificationPort;
    unsigned int _ioNotificationObject;
    unsigned int _ioServiceArrivalIterator;
    BOOL _running;
    NSObject<OS_os_log> *_logHandle;
    unsigned int _connect;
}

- (void)dealloc;
- (void)start;
- (void)stop;
- (id)initWithQueue:(id)a0;
- (void)registerForAllMILNotifications;
- (BOOL)setDutyCycle:(unsigned short)a0;
- (void)startMILServiceLookup;
- (void)unregisterForAllMILNotifications;
- (int)writeData:(const char *)a0 withSize:(unsigned long long *)a1 toRegister:(unsigned long long)a2 withAddressSize:(unsigned long long)a3;

@end
