@class NSNumber, NSMutableDictionary;

@interface UplinkSegment : MultiwaySegment {
    NSMutableDictionary *_streamQualityAggregator;
    NSMutableDictionary *_streamGroupStats;
}

@property unsigned long long packetSendSuccessCounter;
@property unsigned long long packetSendFailureCounter;
@property unsigned long long totalCellTxDataBytes;
@property unsigned long long totalCellDupTxDataBytes;
@property NSNumber *wrmLinkTypeSuggestion;
@property NSNumber *wrmLinkTypeChangeReasonCode;
@property NSNumber *wrmLinkTypeWifiRSSI;
@property NSNumber *wrmLinkTypeWifiSNR;
@property NSNumber *wrmLinkTypeWifiCCA;
@property NSNumber *wrmLinkTypeWifiPacketLoss;
@property NSNumber *wrmLinkTypeCellSignalStrength;
@property NSNumber *wrmLinkTypeCellSignalBar;
@property NSNumber *wrmLinkTypeCellServingCellType;
@property (nonatomic) BOOL isUplinkScreenEnabled;
@property BOOL isFullScreenCapture;
@property BOOL isCenterStageEnabled;
@property BOOL isPortraitBlurEnabled;

- (void)dealloc;
- (id)segmentReport;
- (void)addSegmentWRMReportStats:(id)a0;
- (id)initWithSegmentName:(id)a0 previousSegmentName:(id)a1 segmentStreamGroups:(unsigned int)a2 previousSegmentStreamGroups:(unsigned int)a3 nwActivity:(id)a4 localSwitches:(unsigned int)a5 conversationTimeBase:(id)a6 delegate:(id)a7;
- (void)processMediaQueueTelemetry:(id)a0;
- (void)processBitrateEvent:(id)a0 forMetrics:(id)a1 withStreamGroup:(id)a2 withQuality:(id)a3 sumKey:(id)a4 counterKey:(id)a5;
- (void)processFramerateEvent:(id)a0 forMetrics:(id)a1 withStreamGroup:(id)a2 withQuality:(id)a3 sumKey:(id)a4;
- (void)processVideoTransmitterStats:(id)a0;
- (id)calculateBitrate:(id)a0 sumKey:(id)a1 counterKey:(id)a2;
- (id)calculateFramerate:(id)a0 forKey:(id)a1;
- (void)collectStreamQualityAggregator:(id)a0;
- (void)collectStreamTemporalStats:(id)a0;
- (void)addCellByteCountStats:(id)a0;
- (void)addMediaQueueStats:(id)a0;

@end
