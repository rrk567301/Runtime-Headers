@class BOSRequest, NSString, NSUUID, BOSDevice, NSDate, NSError;

@interface BOSTelemetry : NSObject

@property (retain) BOSRequest *request;
@property (retain) BOSDevice *device;
@property (retain) NSDate *startDate;
@property (retain) NSString *fromMacOSBuild;
@property BOOL isAppleInternalBuild;
@property (retain) NSString *projectVersion;
@property (retain) NSUUID *sessionUUID;
@property (retain) NSError *error;

- (id)initWithRequest:(id)a0;
- (id)init;
- (void)submit;
- (void).cxx_destruct;
- (void)__submitToInstallerDiagnostics;
- (void)_submitToInstallerDiagnostics;
- (id)_summaryForLogging;
- (id)_shortDescriptionForAction:(unsigned long long)a0;

@end
