@class SUOSUProduct, NSError, NSString;

@interface SUOSUTelemetryInstallEvent : SUOSUTelemetryEvent <SUTelemetryReportable>

@property SUOSUProduct *installProduct;
@property unsigned long long clientType;
@property BOOL mdmInitiated;
@property NSError *installError;
@property (readonly) NSString *eventName;
@property (readonly) long long telemetryServer;

- (id)createReportableDictionary;
- (void)addTelemetryEventWithProduct:(id)a0 clientType:(unsigned long long)a1 mdmInitiated:(BOOL)a2 installError:(id)a3;

@end
