@class VCReportingBiDirectionalHistogram, VCReportingHistogram;

@interface VCVideoFECStatsHolder : NSObject

@property (readonly) VCReportingHistogram *totalFECDataByteCount;
@property (readonly) VCReportingHistogram *totalFECParityByteCount;
@property (readonly) VCReportingHistogram *totalFECFrameCount;
@property (readonly) VCReportingHistogram *completeFECFrameCount;
@property (readonly) VCReportingHistogram *failedFECFrameCount;
@property (readonly) VCReportingHistogram *totalFECMediaPacketCount;
@property (readonly) VCReportingHistogram *totalFECParityPacketCount;
@property (readonly) VCReportingHistogram *unfixableFECFrameCount;
@property (readonly) VCReportingHistogram *fecLevelDuration;
@property (readonly) VCReportingHistogram *frameSizeVsParityCount;
@property (readonly) VCReportingHistogram *frameSizeCount;
@property (readonly) VCReportingHistogram *frameSizeVsFailedCount;
@property (readonly) VCReportingBiDirectionalHistogram *frameSizeVsDeltaBetweenParityAndLoss;

- (void)dealloc;
- (void)merge:(id)a0;
- (id)init;

@end
