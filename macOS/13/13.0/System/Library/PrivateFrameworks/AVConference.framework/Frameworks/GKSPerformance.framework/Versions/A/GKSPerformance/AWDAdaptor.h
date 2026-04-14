@class NSNumber, TimingCollection, NSMutableArray, AWDStats;

@interface AWDAdaptor : NSObject {
    NSMutableArray *_rtpPacketLossRateArray;
    NSMutableArray *_jitterBufferUnderflowRateArray;
    NSMutableArray *_frameErasureRateArray;
    NSMutableArray *_jitterBufferResidencyTimeArray;
    NSNumber *_payloadType;
    NSNumber *_sampleRate;
    NSNumber *_ulBitRate;
    NSNumber *_dlBitRate;
    NSNumber *_ratType;
}

@property (retain) AWDStats *awdstat;
@property BOOL callStarted;
@property BOOL RTStatsReceived;
@property (retain) TimingCollection *videoQualityTimers;

- (void)dealloc;
- (id)init;
- (void)processSecondDisplayLogTransportInfoStats;
- (void)generateSecondDisplayAggregatedCallStats:(id)a0;
- (void)updateMomentsStats:(id)a0;
- (void)sendMessageWithMethod:(unsigned short)a0 respCode:(unsigned short)a1 dict:(id)a2;
- (void)parseAudioTierChange:(id)a0;
- (void)parseRTStats:(id)a0;
- (void)parseVideoStats:(unsigned short)a0 dict:(id)a1;
- (void)parseConnectivityTimings:(id)a0;
- (void)parseVideoDegraded:(id)a0 direction:(unsigned short)a1;
- (void)parseAWDEvent:(unsigned short)a0 dict:(id)a1;
- (void)parseCellTechChange:(unsigned short)a0 dict:(id)a1;
- (void)parseVideoProperty:(unsigned short)a0 dict:(id)a1;
- (void)parseConnectionEstablishment:(unsigned short)a0 dict:(id)a1;
- (void)parseDuplication:(unsigned short)a0 dict:(id)a1;
- (void)parseWindowMode:(unsigned short)a0 dict:(id)a1;
- (void)parseDisconnectReport:(unsigned short)a0 dict:(id)a1;
- (void)parseDTXReport:(unsigned short)a0 dict:(id)a1;
- (void)parseModeRoleTransportReport:(unsigned short)a0 dict:(id)a1;
- (void)parseFaceTimeAggregatedSegmentStats:(id)a0;
- (void)generateFaceTimeAggregatedCallStats:(id)a0;
- (void)parseHomeKitIPCameraRealtimeStatsReport:(id)a0;
- (void)updateHomeKitIPCameraPLISentReport;
- (void)updateHomeKitIPCameraKeyFrameReceivedReport;
- (void)parseHomeKitIPCameraStreamStart:(id)a0;
- (void)parseHomeKitIPCameraFirstVideoFrame:(id)a0;
- (void)wifiCallingAddSamples:(id)a0;
- (double)computeMean:(id)a0;
- (double)computeMedian:(id)a0;
- (double)compute95thPercentile:(id)a0;
- (unsigned int *)generateHistogramForValues:(id)a0 withBinBoundaries:(id)a1;
- (BOOL)wifiCallingAddSamplesGenerateAndSendCallEndReport:(id)a0;

@end
