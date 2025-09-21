@class NSObject, PS190PacketDumper;
@protocol OS_os_log, PS190DeviceHandle, PS190DeviceDelegate;

@interface PS190Device : NSObject {
    id<PS190DeviceHandle> _deviceHandle;
    NSObject<OS_os_log> *_log;
}

@property (weak) id<PS190DeviceDelegate> delegate;
@property (readonly) char bootFailureDetected;
@property (readonly) unsigned char bootStatus;
@property (readonly) char hostAccessEnabled;
@property (retain) PS190PacketDumper *dumper;

- (void).cxx_destruct;
- (id)initWithHandle:(id)a0;
- (char)sendCommand:(id)a0;
- (id)readData:(unsigned long long)a0;
- (unsigned int)writeBytes:(const char *)a0 length:(unsigned int)a1;
- (char)startPacketDumperWithFileName:(id)a0;
- (char)commitWithReset;
- (id)queryBootStatus;
- (id)queryInstanceID;
- (id)otpQueryBoardID;
- (char)updateWithFile:(id)a0;
- (char)checkForApplicationMode;
- (char)checkForBootFailure;
- (char)checkForRecoveryMode;
- (char)commitWithoutReset;
- (char)fillInCommandRegistersForCommand:(id)a0;
- (id)otpQueryCPROFuse;
- (id)otpQuerySDOMFuse;
- (char)otpWriteBoardID:(unsigned int)a0;
- (char)otpWriteProductionMode:(unsigned char)a0;
- (char)otpWriteSecurityDomain:(unsigned char)a0;
- (id)queryAppFirmwareVersion;
- (id)queryBoardID;
- (id)queryBootNonceHash;
- (id)queryBootloaderVersion;
- (id)queryCPROFuse;
- (id)queryCRC32ForBlockStartNumber:(unsigned int)a0 endNumber:(unsigned int)a1;
- (id)queryCSECFuse;
- (id)queryChipID;
- (id)queryDBGDFuse;
- (id)queryECID;
- (id)queryEpoch;
- (id)queryHardwareIDIncludingNonce:(char)a0;
- (char)queryHardwareRevision:(char *)a0;
- (id)queryOTPSerialNumber;
- (id)queryRHKPFuse;
- (id)querySDOMFuse;
- (id)querySiliconID;
- (char)readCommandStatus:(char *)a0;
- (char)readRegisterAddress:(unsigned int)a0 buffer:(void *)a1 length:(unsigned int)a2;
- (char)readRegisterAddressNoErrorLog:(unsigned int)a0 buffer:(void *)a1 length:(unsigned int)a2;
- (void)resetToAppLoad;
- (void)resetToRecoveryMode;
- (char)sendCommandWithData:(id)a0;
- (id)sendCommandWithDataResponse:(id)a0;
- (char)sendCommandWithoutData:(id)a0;
- (void)setBootErrorStatus:(unsigned char)a0;
- (char)submitCommandForProcessing:(id)a0;
- (char)submitDataForProcessing:(id)a0;
- (unsigned char)waitForCommandStatusNotBusy;
- (char)writeRegisterAddress:(unsigned int)a0 bytes:(const void *)a1 length:(unsigned int)a2;
- (char)writeRegisterAddress:(unsigned int)a0 data:(id)a1;

@end
