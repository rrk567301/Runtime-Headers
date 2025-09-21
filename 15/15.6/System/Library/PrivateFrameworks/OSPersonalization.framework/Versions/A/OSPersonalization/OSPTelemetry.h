@class NSString, OSPRequest, NSError;

@interface OSPTelemetry : NSObject

@property (retain) OSPRequest *request;
@property (retain) NSString *client;
@property char isAppleInternal;
@property (retain) NSString *sessionUUID;
@property char multipleVariants;
@property (retain) NSError *error;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (void)__submitToInstallerDiagnostics;
- (void)_submitToInstallerDiagnostics;
- (id)_summaryForLogging;
- (id)initWithRequest:(id)a0 multipleVariants:(char)a1;
- (void)submitWithError:(id)a0;

@end
