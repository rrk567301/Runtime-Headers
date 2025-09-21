@class NSString;

@interface IMDeferReplicatedMessagePipelineComponent : IMPipelineComponent

@property (nonatomic) char skipDeferral;
@property (retain, nonatomic) NSString *replicationSourceServiceNameOverride;

- (void).cxx_destruct;
- (id)_runIndividuallyWithInput:(id)a0;
- (char)_shouldDeferDeliveryWithInput:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
