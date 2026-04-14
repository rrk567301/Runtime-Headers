@class VCHistogram, NSMutableDictionary;

@interface DownlinkSegment : MultiwaySegment

@property (readonly) NSMutableDictionary *downlinkParticipantStats;
@property unsigned long long totalCellRxDataBytes;
@property unsigned long long totalCellDupRxDataBytes;
@property BOOL isRTXTelemetryAvailable;
@property unsigned long long nacksSent;
@property unsigned long long nacksFulfilled;
@property unsigned long long nacksFulfilledOnTime;
@property unsigned int nackGeneratorConfigVersion;
@property BOOL serverPacketRetransmissionsForVideoEnabled;
@property BOOL serverPacketRetransmissionsExtraDelayBudgetEnabled;
@property (readonly) VCHistogram *nacksRTXResponseTime;
@property (readonly) VCHistogram *nacksRTXLateTime;
@property (readonly) VCHistogram *nacksRTXMediaBitRate;
@property (readonly) VCHistogram *nacksRTXRetransmittedMediaBitRate;
@property (readonly) VCHistogram *nacksPLRWithRTX;
@property (readonly) VCHistogram *nacksPLRWithoutRTX;
@property (readonly) VCHistogram *JBTarget;
@property (readonly) VCHistogram *JBUnclippedTarget;

- (void)dealloc;
- (id)initWithSegmentName:(id)a0 previousSegmentName:(id)a1 segmentStreamGroups:(unsigned int)a2 previousSegmentStreamGroups:(unsigned int)a3 nwActivity:(id)a4 localSwitches:(unsigned int)a5 conversationTimeBase:(id)a6 delegate:(id)a7;
- (void)addCellByteCountStats:(id)a0;
- (id)callStatsForParticipant:(id)a0;
- (void)resetVideoDegradedForAllParticipants:(double)a0;
- (void)processVideoDegraded:(BOOL)a0 forParticipant:(id)a1 streamGroup:(id)a2 timestamp:(double)a3;
- (void)updateMinimumAndMaximumAVSyncOffset:(id)a0 streamGroupStats:(id)a1;
- (void)processVideoStreamData:(id)a0 streamGroupStats:(id)a1;
- (void)processAudioStreamData:(id)a0 streamGroupStats:(id)a1;
- (void)processRTXStreamData:(id)a0 streamGroupStats:(id)a1;
- (void)processStreamData:(id)a0 forParticipant:(id)a1 streamGroup:(id)a2;
- (void)finalizeVideoStreamGroupStats:(id)a0 timestamp:(double)a1;
- (void)accumulateVideoPerStreamGroupStats:(id)a0 streamGroupStats:(id)a1;
- (void)accumulateAudioPerStreamGroupStats:(id)a0 streamGroupStats:(id)a1;
- (void)accumulateRTXPerStreamGroupStats:(id)a0 streamGroupStats:(id)a1 streamGroup:(id)a2;
- (void)reportVideoPerStreamGroupStats:(id)a0 streamGroup:(id)a1 accumulatedStreamGroupStats:(id)a2;
- (void)reportAudioPerStreamGroupStats:(id)a0 streamGroup:(id)a1 accumulatedStreamGroupStats:(id)a2;
- (void)reportRTXPerStreamGroupStats:(id)a0 streamGroup:(id)a1 accumulatedStreamGroupStats:(id)a2;
- (void)addPerStreamGroupStats:(id)a0 timestamp:(double)a1;
- (id)segmentReport:(double)a0;

@end
