@interface TFInterprocessDiagnosticFileReceiver : NSObject {
    void /* unknown type, empty encoding */ interprocessDiagnosticFilesNotificationName;
    void /* unknown type, empty encoding */ diagnosticFileListURL;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ diagnosticFiles;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)diagnosticFileURLs;
- (id)initWithNotificationName:(id)a0 diagnosticFileListURL:(id)a1 log:(id)a2;

@end
