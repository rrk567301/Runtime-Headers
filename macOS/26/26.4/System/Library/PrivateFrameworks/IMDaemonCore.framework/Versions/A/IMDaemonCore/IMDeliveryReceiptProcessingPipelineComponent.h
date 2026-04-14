@class IMDMessageStore;

@interface IMDeliveryReceiptProcessingPipelineComponent : IMPipelineComponent {
    IMDMessageStore *_messageStore;
}

- (id)initWithMessageStore:(id)a0;
- (void).cxx_destruct;
- (void)_metricMessageDelivered:(id)a0 chat:(id)a1 serviceSession:(id)a2;
- (void)_metricMessageGUIDSendToDelivered:(id)a0;
- (id)_processDeliveryReceiptForMessage:(id)a0 date:(id)a1 isFromOffGridCapableDevice:(BOOL)a2 chat:(id)a3 serviceSession:(id)a4;
- (void)_reduceExpectedSatelliteDeliveriesOnMessage:(id)a0 chat:(id)a1;
- (id)runIndividuallyWithInput:(id)a0;

@end
