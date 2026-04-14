@class AppleTypeCRetimerHardwareID, NSString, NSObject, AppleTypeCPacketDumper;
@protocol OS_os_log, AppleTypeCRetimerIICDelegate;

@interface AppleTypeCRetimerIIC : NSObject {
    unsigned int _service;
    unsigned int _connection;
    NSString *_serviceName;
    NSObject<OS_os_log> *_log;
    AppleTypeCPacketDumper *_dumper;
    AppleTypeCRetimerHardwareID *_hardwareID;
}

@property (readonly) NSString *bverString;
@property (readonly) NSString *internalFirmwareVersion;
@property (readonly) NSString *chipInfo;
@property (weak) id<AppleTypeCRetimerIICDelegate> delegate;
@property (readonly) AppleTypeCRetimerHardwareID *hardwareID;

+ (id)getDeviceNames;

- (void)dealloc;
- (void).cxx_destruct;
- (id)sendCommand:(id)a0;
- (id)initWithRouterID:(unsigned char)a0;
- (BOOL)initIICServiceForRouterID:(unsigned char)a0;
- (int)writeBuffer:(char *)a0 length:(unsigned int)a1;
- (int)writeRegister:(unsigned char)a0 buffer:(void *)a1 length:(unsigned int)a2;
- (int)readRegister:(unsigned char)a0 buffer:(void *)a1 length:(unsigned int)a2;
- (unsigned int)sleepTimeForCommandResultPollIteration:(unsigned int)a0;
- (unsigned char)sfwfBlockCount:(const char *)a0 length:(unsigned int)a1;
- (BOOL)transferFirmware:(const char *)a0 length:(unsigned int)a1 resetAfterUpdate:(BOOL)a2;
- (BOOL)startPacketDumperWithFileName:(id)a0;

@end
