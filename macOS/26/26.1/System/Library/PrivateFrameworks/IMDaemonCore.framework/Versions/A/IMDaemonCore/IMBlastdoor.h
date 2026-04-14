@interface IMBlastdoor : NSObject

+ (id)sendRelayGroupMutationData:(id)a0 error:(id *)a1;
+ (BOOL)_commandReadyForBlastdoor:(long long)a0;
+ (void)sendSMSDictionary:(id)a0 withCompletionBlock:(id /* block */)a1;
+ (void)sendBlastDoorError:(id)a0 guid:(id)a1 messageTypeString:(id)a2 senderURI:(id)a3 senderToken:(id)a4 messageContext:(id)a5 payloadAttachmentURL:(id)a6;
+ (id)logger;
+ (void)sendDictionary:(id)a0 senderContext:(id)a1 withCompletionBlock:(id /* block */)a2;
+ (void)sendCollaborationNoticeActionDictionary:(id)a0 senderContext:(id)a1 withCompletionBlock:(id /* block */)a2;
+ (long long)_convertErrorToBlastdoorError:(id)a0;
+ (void)_askToTapToRadarForGUID:(id)a0 messageTypeString:(id)a1 sender:(id)a2 errorString:(id)a3 payloadAttachmentURL:(id)a4;
+ (void)sendCollaborationNoticeData:(id)a0 senderContext:(id)a1 withCompletionBlock:(id /* block */)a2;
+ (BOOL)_messageBlastdoorMetricsEnabled;
+ (void)sendClearNoticeData:(id)a0 senderContext:(id)a1 withCompletionBlock:(id /* block */)a2;
+ (BOOL)supportsFeature:(id)a0;
+ (id)sendLiteRelayData:(id)a0 senderContext:(id)a1 error:(id *)a2;
+ (id)sendLiteData:(id)a0 senderContext:(id)a1 error:(id *)a2;
+ (id)sendSatelliteSMSDictionary:(id)a0 senderContext:(id)a1 error:(id *)a2;
+ (id)blastdoorInterfaceForSenderContext:(id)a0;
+ (id)sendRelayReachabilityResponse:(id)a0 error:(id *)a1;
+ (id)sendRelayReachabilityRequest:(id)a0 error:(id *)a1;

@end
