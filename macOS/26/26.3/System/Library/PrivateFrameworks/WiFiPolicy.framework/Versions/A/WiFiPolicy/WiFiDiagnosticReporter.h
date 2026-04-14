@class SDRDiagnosticReporter;

@interface WiFiDiagnosticReporter : NSObject {
    SDRDiagnosticReporter *_ABCReporter;
}

+ (id)sharedWiFiDiagnosticReporter;

- (id)init;
- (void).cxx_destruct;
- (void)initABCReporter;
- (BOOL)isWiFiABCSignatureUnblocked:(id)a0;
- (void)submitWiFiWatchdogReason:(id)a0 subtypeContext:(id)a1;

@end
