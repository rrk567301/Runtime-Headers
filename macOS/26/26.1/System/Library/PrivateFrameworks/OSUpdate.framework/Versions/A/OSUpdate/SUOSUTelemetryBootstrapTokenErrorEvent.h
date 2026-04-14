@class NSError, NSString, NSArray;

@interface SUOSUTelemetryBootstrapTokenErrorEvent : SUOSUTelemetryEvent <SUTelemetryReportable>

@property (retain) NSError *error;
@property (retain) NSString *failedAction;
@property (retain) NSArray *productKeys;
@property (retain) NSString *buildVersion;
@property (retain) NSString *pmv;
@property (readonly) NSString *eventName;
@property (readonly) long long telemetryServer;

- (void).cxx_destruct;
- (id)createReportableDictionary;
- (void)addTelemetryWithDescriptor:(id)a0 failedAction:(id)a1 error:(id)a2;
- (void)addTelemetryWithPMV:(id)a0 productKeys:(id)a1 buildVersion:(id)a2 failedAction:(id)a3 error:(id)a4;

@end
