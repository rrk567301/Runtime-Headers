@class SDRDiagnosticReporter;

@interface WiFiDiagnosticReporter : NSObject {
    SDRDiagnosticReporter *_ABCReporter;
}

+ (id)sharedWiFiDiagnosticReporter;

- (void).cxx_destruct;
- (id)init;
- (void)initABCReporter;
- (BOOL)isWiFiABCSignatureUnblocked:(id)a0;
- (void)submitWiFiWatchdogReason:(id)a0 subtypeContext:(id)a1;

@end
