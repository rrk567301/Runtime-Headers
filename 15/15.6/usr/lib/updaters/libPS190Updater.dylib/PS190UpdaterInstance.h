@class PS190Instance;
@protocol PS190UpdaterInstanceDelegate;

@interface PS190UpdaterInstance : NSObject <PS190RecoveryDeviceDelegate, PS190DeviceDelegate> {
    id<PS190UpdaterInstanceDelegate> _delegate;
    PS190Instance *_ps190Instance;
    char _recoveryModeActive;
    char _needsOTPProgramming;
    char _startedFromRecoveryMode;
    unsigned int _loadToRAMPercentComplete;
}

@property (readonly) char complete;
@property (readonly) unsigned int tag;
@property char useLocalSigning;

- (id)description;
- (void).cxx_destruct;
- (id)queryHardwareID;
- (void)firmwareBlocksSent:(unsigned int)a0 blocksTotal:(unsigned int)a1;
- (id)findHandleAfterReset;
- (void)firmwareBytesSent:(unsigned int)a0 bytesTotal:(unsigned int)a1;
- (id)initWithInstance:(id)a0 tag:(unsigned int)a1 delegate:(id)a2;
- (char)performUpdateForFirmwareFile:(id)a0 inputDict:(id)a1 skipSameVersion:(char)a2;
- (char)programOTPForDevice:(id)a0 withInputParameters:(id)a1;

@end
