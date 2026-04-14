@interface TFDiagnosticFileManager : NSObject <TFDiagnosticFileManagerType, TFInterprocessDiagnosticFileManagerType> {
    void /* unknown type, empty encoding */ diagnosticDumpDir;
    void /* unknown type, empty encoding */ interprocessDiagnosticDumpNotification;
    void /* unknown type, empty encoding */ diagnosticFileProviders;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ interprocessNotificationCallback;
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;
- (id)diagnosticFiles;
- (void)addDiagnosticFileProvider:(id)a0;
- (void)removeDiagnosticFileProvider:(id)a0;
- (id)availableDiagnosticFiles;
- (id)initWithDiagnosticDumpDir:(id)a0 diagnosticDumpNotificationName:(id)a1 log:(id)a2;

@end
