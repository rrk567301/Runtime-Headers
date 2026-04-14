@interface IDSGFTMetricsParticipantUpdate : IDSGFTMetricsReferencePoint

- (void)receivedJoinEventOverPushFromParticipantID:(id)a0;
- (void)receivedJoinEventOverQUICFromParticipantID:(id)a0;
- (void)receivedLeaveEventOverPushFromParticipantID:(id)a0;
- (void)receivedLeaveEventOverQUICFromParticipantID:(id)a0;
- (void)receivedParticipantInfoEventOverPushFromParticipantID:(id)a0;
- (void)receivedParticipantInfoEventOverQUICFromParticipantID:(id)a0;

@end
