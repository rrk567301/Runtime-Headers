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
@property (weak) id<AppleTypeCRetimerIICDelegate> delegate;

+ (id)getDeviceNames;

- (void)dealloc;
- (void).cxx_destruct;
- (id)sendCommand:(id)a0;
- (void)performReset;
- (BOOL)initIICServiceForRouterID:(unsigned char)a0;
- (id)initWithRouterID:(unsigned char)a0;
- (id)queryChipInfo:(id *)a0;
- (id)queryHardwareID:(id *)a0;
- (int)readRegister:(unsigned char)a0 buffer:(void *)a1 length:(unsigned int)a2;
- (unsigned char)sfwfBlockCount:(const char *)a0 length:(unsigned int)a1;
- (unsigned int)sleepTimeForCommandResultPollIteration:(unsigned int)a0;
- (BOOL)startPacketDumperWithFileName:(id)a0;
- (BOOL)transferFirmware:(const char *)a0 length:(unsigned int)a1;
- (int)writeBuffer:(char *)a0 length:(unsigned int)a1;
- (int)writeRegister:(unsigned char)a0 buffer:(void *)a1 length:(unsigned int)a2;

@end
