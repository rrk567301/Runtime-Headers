@interface AMSAutoBugCaptureDiagnosticActionOptions : NSObject {
    void /* unknown type, empty encoding */ logArchive;
    void /* unknown type, empty encoding */ getNetworkInfo;
    void /* unknown type, empty encoding */ crashAndSpinLogs;
    void /* unknown type, empty encoding */ diagnosticExtensionOptions;
    void /* unknown type, empty encoding */ probeOptions;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithLogArchive:(BOOL)a0 getNetworkInfo:(BOOL)a1 crashAndSpinLogs:(BOOL)a2 diagnosticExtensionOptions:(id)a3 probeOptions:(id)a4;

@end
