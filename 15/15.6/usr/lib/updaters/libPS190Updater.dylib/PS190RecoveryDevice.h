@class PS190PacketDumper, NSData, NSObject, NSNumber;
@protocol OS_os_log, PS190DeviceHandle, PS190RecoveryDeviceDelegate;

@interface PS190RecoveryDevice : NSObject {
    id<PS190DeviceHandle> _handle;
    NSObject<OS_os_log> *_log;
    char _infoQueryComplete;
    unsigned char _epoch;
    unsigned char _securityDomain;
    char _securityDomainValid;
    NSNumber *_productionMode;
    char _securityMode;
    char _debugDisable;
    char _realHDCPKeysPresent;
    NSNumber *_boardID;
    unsigned int _chipID;
    unsigned long long _ecid;
    NSData *_nonce;
    unsigned int _bytesTransferred;
    unsigned int _bytesToTransfer;
}

@property (weak) id<PS190RecoveryDeviceDelegate> delegate;
@property (retain) PS190PacketDumper *dumper;

- (void).cxx_destruct;
- (char)writeFile:(id)a0;
- (id)initWithHandle:(id)a0;
- (id)queryHardwareID;
- (char)checkFieldNamed:(const char *)a0 programmed:(char)a1 valid:(char)a2;
- (char)enableSRAMAccess;
- (char)loadFile:(id)a0;
- (char)queryBoardID;
- (char)queryBootNonceHash:(char *)a0;
- (char)queryBootNonceHashLSB:(char *)a0;
- (char)queryBootNonceHashMSB:(char *)a0;
- (char)queryChipEpoch;
- (char)queryChipID;
- (char)queryChipInfo;
- (char)queryECID;
- (char)queryFlags:(char *)a0;
- (id)queryOTPProgrammedFields;
- (id)queryOTPValidFields;
- (char)querySecurityDomain;
- (char)readRegisterAddress:(unsigned int)a0 buffer:(void *)a1 length:(unsigned int)a2;
- (char)resetToAppMode;
- (char)resetToMemoryImage;
- (char)resetToMode:(unsigned char)a0;
- (char)resetToRecoveryMode;
- (char)waitForHostAccessEnable;
- (char)writeRegisterAddress:(unsigned int)a0 bytes:(const void *)a1 length:(unsigned int)a2;
- (char)writeRequest:(unsigned char)a0;
- (char)writeToSRAMAddress:(unsigned int)a0 bytes:(const void *)a1 length:(unsigned int)a2;

@end
