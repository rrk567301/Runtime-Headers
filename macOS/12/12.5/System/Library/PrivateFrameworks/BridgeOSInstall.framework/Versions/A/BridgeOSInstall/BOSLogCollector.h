@class NSString, NSDate;

@interface BOSLogCollector : NSObject

@property (retain) NSDate *startDate;
@property (retain) NSString *sessionUUID;
@property BOOL initializedFromNVRAMState;
@property (retain) NSString *macOSBridgeOSInstallLog;
@property (retain) NSString *macOSBridgeOSSoftwareUpdateControllerLog;
@property (retain) NSString *bridgeOSLog;

+ (id)_nvramStringForStartDate:(id)a0 sessionUUID:(id)a1;
+ (BOOL)saveUpdateInProgressNVRAMStateWithStartDate:(id)a0 sessionUUID:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_initFromNVRAMString:(id)a0;
- (id)initWithStartDate:(id)a0 sessionUUID:(id)a1;
- (void)_clearNVRAMState;
- (void)collectAndSubmitLogs;
- (id)_collectMacOSBridgeOSInstallLog;
- (id)_collectMacOSBridgeOSSoftwareUpdateControllerLog;
- (id)_collectMacOSInstallLog;
- (id)_collectBridgeOSLog;
- (id)_scrubString:(id)a0;
- (BOOL)_submitToCrashReporter;
- (id)_collectLogsWithPredicate:(id)a0 startDate:(id)a1 maximumByteLength:(unsigned long long)a2;
- (id)_tailLogFromURL:(id)a0 maximumByteLength:(unsigned long long)a1;
- (id)_replaceOccurrencesOfPattern:(id)a0 withReplacement:(id)a1 inString:(id)a2;
- (id)initFromNVRAMState;
- (void)collectAndSubmitLogsIfErrorOccurred;

@end
