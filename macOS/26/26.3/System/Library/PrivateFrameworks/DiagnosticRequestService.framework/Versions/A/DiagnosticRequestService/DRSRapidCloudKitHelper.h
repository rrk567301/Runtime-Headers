@class DiagnosticPipelineRapidServiceFunctionsClientObjc;

@interface DRSRapidCloudKitHelper : NSObject

@property (readonly, nonatomic) DiagnosticPipelineRapidServiceFunctionsClientObjc *objcClient;

+ (id)devHelper;
+ (id)prodHelper;

- (void).cxx_destruct;
- (void)submitRapidPayload:(id)a0 replyHandler:(id /* block */)a1;
- (id)_initWithEnvironment:(long long)a0;

@end
