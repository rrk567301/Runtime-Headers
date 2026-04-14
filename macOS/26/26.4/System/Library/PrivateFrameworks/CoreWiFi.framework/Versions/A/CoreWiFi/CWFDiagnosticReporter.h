@class SDRDiagnosticReporter;

@interface CWFDiagnosticReporter : NSObject {
    SDRDiagnosticReporter *_ABCReporter;
}

+ (id)sharedWiFiDiagnosticReporter;

- (void).cxx_destruct;
- (id)init;
- (void)initABCReporter;
- (void)removeRequestedBlockOnWiFiABCSignature:(id)a0;
- (void)requestWiFiToBlockABCSignatureUntil:(id)a0 signature:(id)a1;
- (void)submitWiFiDiagnosticReportType:(id)a0 reason:(id)a1 subtypeContext:(id)a2;

@end
