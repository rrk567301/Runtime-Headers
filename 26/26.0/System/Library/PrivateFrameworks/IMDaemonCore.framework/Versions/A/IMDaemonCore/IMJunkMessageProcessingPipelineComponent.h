@class IMDiMessageIDSTrustedData, IMDTrustKitDecisioningManager;

@interface IMJunkMessageProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDiMessageIDSTrustedData *idsTrustedData;
@property (retain, nonatomic) IMDTrustKitDecisioningManager *trustKitManager;

- (void).cxx_destruct;
- (void)_trackSendEventForSender:(id)a0 andReceiver:(id)a1;
- (id)initWithIDSTrustedData:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
