@class NSObject, PS190PacketDumper;
@protocol OS_os_log, PS190DeviceHandle, PS190DeviceDelegate;

@interface PS190Device : NSObject {
    id<PS190DeviceHandle> _deviceHandle;
    NSObject<OS_os_log> *_log;
}

@property (weak) id<PS190DeviceDelegate> delegate;
@property (readonly) BOOL bootFailureDetected;
@property (readonly) unsigned char bootStatus;
@property (readonly) BOOL hostAccessEnabled;
@property (retain) PS190PacketDumper *dumper;

- (void).cxx_destruct;
- (id)initWithHandle:(id)a0;
- (BOOL)sendCommand:(id)a0;
- (id)readData:(unsigned long long)a0;
- (unsigned int)writeBytes:(const char *)a0 length:(unsigned int)a1;
- (BOOL)startPacketDumperWithFileName:(id)a0;
- (BOOL)writeRegisterAddress:(unsigned int)a0 bytes:(const void *)a1 length:(unsigned int)a2;
- (BOOL)readRegisterAddress:(unsigned int)a0 buffer:(void *)a1 length:(unsigned int)a2;
- (BOOL)readRegisterAddressNoErrorLog:(unsigned int)a0 buffer:(void *)a1 length:(unsigned int)a2;
- (BOOL)fillInCommandRegistersForCommand:(id)a0;
- (BOOL)submitCommandForProcessing:(id)a0;
- (BOOL)submitDataForProcessing:(id)a0;
- (BOOL)readCommandStatus:(char *)a0;
- (unsigned char)waitForCommandStatusNotBusy;
- (id)sendCommandWithDataResponse:(id)a0;
- (id)queryAppFirmwareVersion;
- (id)queryChipID;
- (id)queryBoardID;
- (id)otpQueryBoardID;
- (id)queryEpoch;
- (id)queryBootloaderVersion;
- (id)querySDOMFuse;
- (id)otpQuerySDOMFuse;
- (id)queryCPROFuse;
- (id)otpQueryCPROFuse;
- (id)queryCSECFuse;
- (id)queryRHKPFuse;
- (id)queryDBGDFuse;
- (id)queryBootStatus;
- (id)queryOTPSerialNumber;
- (id)querySiliconID;
- (id)queryECID;
- (id)queryBootNonceHash;
- (id)queryCRC32ForBlockStartNumber:(unsigned int)a0 endNumber:(unsigned int)a1;
- (id)queryHardwareIDIncludingNonce:(BOOL)a0;
- (BOOL)otpWriteSecurityDomain:(unsigned char)a0;
- (BOOL)otpWriteProductionMode:(unsigned char)a0;
- (BOOL)otpWriteBoardID:(unsigned int)a0;
- (BOOL)sendCommandWithData:(id)a0;
- (BOOL)sendCommandWithoutData:(id)a0;
- (BOOL)checkForBootFailure;
- (BOOL)checkForRecoveryMode;
- (BOOL)checkForApplicationMode;
- (void)setBootErrorStatus:(unsigned char)a0;
- (BOOL)updateWithFile:(id)a0;
- (BOOL)commitWithReset;
- (BOOL)commitWithoutReset;
- (void)resetToRecoveryMode;
- (void)resetToAppLoad;
- (BOOL)writeRegisterAddress:(unsigned int)a0 data:(id)a1;
- (id)queryInstanceID;

@end
