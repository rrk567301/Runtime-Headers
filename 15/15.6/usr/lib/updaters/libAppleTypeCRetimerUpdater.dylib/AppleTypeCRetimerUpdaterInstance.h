@class ACE, NSString, AppleTypeCRetimerUpdaterIIC, AppleTypeCRetimerDFU, AppleTypeCRetimerPanicStatus, FTABFile;
@protocol AppleTypeCRetimerUpdaterInstanceDelegate;

@interface AppleTypeCRetimerUpdaterInstance : NSObject {
    id<AppleTypeCRetimerUpdaterInstanceDelegate> _delegate;
    FTABFile *_ftab;
    ACE *_ace;
    AppleTypeCRetimerUpdaterIIC *_iicUpdater;
    AppleTypeCRetimerDFU *_dfuUpdater;
    unsigned int _nextDFUFirmwareProgressReportPercentThreshold;
    unsigned int _nextDFUManifestProgressReportPercentThreshold;
    unsigned int _nextUpdateProgressReportPercentThreshold;
    char _powerForced;
    char _dfuCheckHasRun;
    char _skipUpdates;
    AppleTypeCRetimerPanicStatus *_panicStatus;
}

@property (readonly) unsigned char routerID;
@property (readonly) char useLocalSigning;
@property (readonly) NSString *name;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)performReset;
- (id)queryHardwareID;
- (char)allocateACE;
- (char)allocateUpdaterDFU;
- (char)allocateUpdaterIIC;
- (void)bytesSent:(unsigned int)a0 bytesTotal:(unsigned int)a1;
- (char)checkForVersionMatch:(char *)a0;
- (void)dfuImageBytesSent:(unsigned int)a0 bytesTotal:(unsigned int)a1;
- (char)generateFTABForData:(id)a0 manifestData:(id)a1 apHardwareID:(id)a2 debugFlags:(unsigned long long)a3;
- (id)generateManifestForFTAB:(id)a0 hardwareID:(id)a1 apParameters:(id)a2;
- (id)initWithRouterID:(unsigned char)a0 delegate:(id)a1 forcePower:(char)a2;
- (void)manifestBytesSent:(unsigned int)a0 bytesTotal:(unsigned int)a1;
- (char)performUpdateDFU;
- (char)performUpdateForFTABData:(id)a0 manifestData:(id)a1 apHardwareID:(id)a2 skipSameVersion:(char)a3 debugFlags:(unsigned long long)a4;
- (char)performUpdateIIC;
- (void)printVersions;
- (char)shouldResetAfterUpdate;

@end
