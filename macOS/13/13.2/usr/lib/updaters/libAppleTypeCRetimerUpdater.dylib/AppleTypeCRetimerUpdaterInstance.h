@class FTABFile, AppleTypeCRetimerUpdaterIIC, AppleTypeCRetimerDFU, ACE;
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
    BOOL _powerForced;
}

@property (readonly) unsigned char routerID;

- (void)dealloc;
- (void).cxx_destruct;
- (void)performReset;
- (id)queryHardwareID;
- (id)initWithRouterID:(unsigned char)a0 delegate:(id)a1 forcePower:(BOOL)a2;
- (BOOL)generateFTABForData:(id)a0 manifestData:(id)a1 apHardwareID:(id)a2 debugFlags:(unsigned long long)a3;
- (BOOL)allocateACE;
- (BOOL)allocateUpdaterIIC;
- (BOOL)allocateUpdaterDFU;
- (BOOL)availableOverIIC;
- (BOOL)checkForVersionMatch:(BOOL *)a0;
- (BOOL)performUpdateForFTABData:(id)a0 manifestData:(id)a1 apHardwareID:(id)a2 skipSameVersion:(BOOL)a3 debugFlags:(unsigned long long)a4;
- (BOOL)performUpdateDFU;
- (BOOL)shouldResetAfterUpdate;
- (BOOL)performUpdateIIC;
- (void)printVersions;
- (void)dfuImageBytesSent:(unsigned int)a0 bytesTotal:(unsigned int)a1;
- (void)manifestBytesSent:(unsigned int)a0 bytesTotal:(unsigned int)a1;
- (id)generateManifestForFTAB:(id)a0 hardwareID:(id)a1 apParameters:(id)a2;
- (void)bytesSent:(unsigned int)a0 bytesTotal:(unsigned int)a1;

@end
