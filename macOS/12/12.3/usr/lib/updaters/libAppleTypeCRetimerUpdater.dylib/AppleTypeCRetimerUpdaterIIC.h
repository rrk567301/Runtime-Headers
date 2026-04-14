@class AppleTypeCRetimerHardwareID, NSString, AppleTypeCRetimerIIC, NSObject;
@protocol OS_os_log, AppleTypeCRetimerUpdaterIICDelegate;

@interface AppleTypeCRetimerUpdaterIIC : NSObject <AppleTypeCRetimerIICDelegate> {
    AppleTypeCRetimerIIC *_iic;
    NSObject<OS_os_log> *_log;
}

@property (readonly) NSString *bverString;
@property (readonly) NSString *internalFirmwareVersion;
@property (readonly) NSString *chipInfo;
@property (weak) id<AppleTypeCRetimerUpdaterIICDelegate> delegate;
@property (readonly) AppleTypeCRetimerHardwareID *hardwareID;

+ (id)getRouterIDs;
+ (id)getDeviceNames;

- (void).cxx_destruct;
- (id)initWithRouterID:(unsigned char)a0;
- (void)bytesSent:(unsigned int)a0 bytesTotal:(unsigned int)a1;
- (BOOL)startPacketDumperWithFileName:(id)a0;
- (BOOL)updateWithFTAB:(id)a0;

@end
