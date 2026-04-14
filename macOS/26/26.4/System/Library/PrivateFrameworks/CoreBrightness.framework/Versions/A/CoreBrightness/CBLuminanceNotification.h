@class NSString, NSUUID, HIDServiceClient, NSObject;
@protocol OS_os_log;

@interface CBLuminanceNotification : NSObject <CBHIDServiceProtocol> {
    HIDServiceClient *_service;
    NSUUID *_usbID;
    NSObject<OS_os_log> *_logHandle;
    BOOL _receivedAny;
    double _maxBrightness;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (void)dealloc;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (void)_queryInitialLuminance;
- (id)copyLimit;
- (id)initWithContainerUUID:(id)a0 andDisplayId:(unsigned long long)a1;

@end
