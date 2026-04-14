@interface TFInterprocessDiagnosticDumpNotifier : NSObject {
    void /* unknown type, empty encoding */ interprocessDiagnosticDumpNotification;
    void /* unknown type, empty encoding */ diagnosticTempDir;
    void /* unknown type, empty encoding */ logger;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithNotificationName:(id)a0 diagnosticTempDir:(id)a1 log:(id)a2;
- (void)triggerDiagnosticFileDump;

@end
