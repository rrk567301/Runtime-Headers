@class SDRDiagnosticReporter;

@interface WiFiDiagnosticReporter : NSObject {
    SDRDiagnosticReporter *_ABCReporter;
}

+ (id)sharedWiFiDiagnosticReporter;

- (id)init;
- (void).cxx_destruct;
- (void)SubmitDiagnosticSignatureLazy;
- (void)initABCReporter;
- (void)submitWiFiWatchdogReason:(id)a0 subtypeContext:(id)a1;

@end
