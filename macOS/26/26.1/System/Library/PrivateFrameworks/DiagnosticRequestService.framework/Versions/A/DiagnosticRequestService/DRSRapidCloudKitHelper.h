@class DiagnosticPipelineRapidServiceFunctionsClientObjc;

@interface DRSRapidCloudKitHelper : NSObject

@property (readonly, nonatomic) DiagnosticPipelineRapidServiceFunctionsClientObjc *objcClient;

+ (id)devHelper;
+ (id)prodHelper;

- (id)_initWithEnvironment:(long long)a0;
- (void)submitRapidPayload:(id)a0 replyHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
