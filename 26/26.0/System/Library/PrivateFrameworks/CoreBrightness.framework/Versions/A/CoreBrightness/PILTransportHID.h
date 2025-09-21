@class NSString, NSObject, HIDServiceClient;
@protocol OS_os_log;

@interface PILTransportHID : NSObject <PILTransportProtocol, CBHIDServiceProtocol> {
    HIDServiceClient *_pilPlugin;
    NSObject<OS_os_log> *_logHandle;
    BOOL _running;
}

@property (readonly) unsigned int dutyCycle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void)start;
- (void)dealloc;
- (void)stop;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (BOOL)getDutyCycleMin:(unsigned int *)a0 andMax:(unsigned int *)a1;
- (void)hidServiceArrived:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)setDutyCycle:(float)a0;
- (BOOL)setDutyCycleInternal:(unsigned short)a0;
- (int)writeDataHID:(unsigned short *)a0;

@end
