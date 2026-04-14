@class NSString, NSDate;

@interface BOSLogCollector : NSObject

@property (retain) NSDate *startDate;
@property (retain) NSString *sessionUUID;
@property BOOL initializedFromNVRAMState;
@property (retain) NSString *macOSBridgeOSInstallLog;
@property (retain) NSString *macOSBridgeOSSoftwareUpdateControllerLog;
@property (retain) NSString *bridgeOSLog;

+ (BOOL)saveUpdateInProgressNVRAMStateWithStartDate:(id)a0 sessionUUID:(id)a1;
+ (id)_nvramStringForStartDate:(id)a0 sessionUUID:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 sessionUUID:(id)a1;
- (id)initFromNVRAMState;
- (id)_initFromNVRAMString:(id)a0;
- (void)collectAndSubmitLogsIfErrorOccurred;
- (void)collectAndSubmitLogs;
- (void)_clearNVRAMState;
- (id)_collectMacOSBridgeOSInstallLog;
- (id)_collectMacOSBridgeOSSoftwareUpdateControllerLog;
- (id)_collectMacOSInstallLog;
- (id)_collectLogsWithPredicate:(id)a0 startDate:(id)a1 maximumByteLength:(unsigned long long)a2;
- (id)_collectBridgeOSLog;
- (id)_tailLogFromURL:(id)a0 maximumByteLength:(unsigned long long)a1;
- (id)_scrubString:(id)a0;
- (id)_replaceOccurrencesOfPattern:(id)a0 withReplacement:(id)a1 inString:(id)a2;
- (BOOL)_submitToCrashReporter;

@end
