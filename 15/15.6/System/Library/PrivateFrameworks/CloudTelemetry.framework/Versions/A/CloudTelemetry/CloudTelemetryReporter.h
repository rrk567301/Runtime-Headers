@interface CloudTelemetryReporter : NSObject {
    void /* unknown type, empty encoding */ connectionManager;
    void /* unknown type, empty encoding */ activeSendOneMessageCount;
    void /* unknown type, empty encoding */ activeSendOneMessageLimit;
    void /* unknown type, empty encoding */ xpcServiceXpcActivityStarted;
}

+ (char)reportWithTeamID:(id)a0 eventType:(id)a1 event:(id)a2 allowCellularAccess:(char)a3 allowExpensiveAccess:(char)a4 bundleID:(id)a5 error:(id *)a6;
+ (id)_privacyLogs:(id *)a0;

- (id)init;
- (void).cxx_destruct;

@end
