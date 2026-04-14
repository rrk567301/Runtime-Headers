@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface PILTransportIOService : NSObject <PILTransportProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    struct IONotificationPort { } *_ioNotificationPort;
    unsigned int _ioNotificationObject;
    unsigned int _ioServiceArrivalIterator;
    NSObject<OS_os_log> *_logHandle;
    unsigned int _connect;
    BOOL _running;
}

@property (readonly) unsigned int dutyCycle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)start;
- (void)stop;
- (id)initWithQueue:(id)a0;
- (int)readData:(unsigned short *)a0 withSize:(unsigned long long *)a1 fromRegister:(unsigned long long)a2;
- (BOOL)getDutyCycleMin:(unsigned int *)a0 andMax:(unsigned int *)a1;
- (BOOL)getDutyCycleThreshold:(unsigned short *)a0;
- (void)lookupPILServiceUntrusted;
- (void)registerForAllMILNotifications;
- (BOOL)setDutyCycle:(float)a0;
- (BOOL)setDutyCycleInternal:(unsigned short)a0;
- (void)unregisterForAllMILNotifications;
- (int)writeDataUntrusted:(const char *)a0 withSize:(unsigned long long *)a1 toRegister:(unsigned long long)a2 withAddressSize:(unsigned long long)a3;

@end
