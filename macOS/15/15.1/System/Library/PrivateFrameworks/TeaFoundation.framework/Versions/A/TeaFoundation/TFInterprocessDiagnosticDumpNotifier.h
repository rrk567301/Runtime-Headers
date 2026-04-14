@interface TFInterprocessDiagnosticDumpNotifier : NSObject {
    void /* unknown type, empty encoding */ interprocessDiagnosticDumpNotification;
    void /* unknown type, empty encoding */ diagnosticFileManager;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithNotificationName:(id)a0 diagnosticFileManager:(id)a1;
- (void)triggerDiagnosticFileDump;

@end
