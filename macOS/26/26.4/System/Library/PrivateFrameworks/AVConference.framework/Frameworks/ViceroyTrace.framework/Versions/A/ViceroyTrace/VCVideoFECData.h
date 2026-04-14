@class VCReportingHistogram;

@interface VCVideoFECData : NSObject <VCAggregatorDataCollector> {
    VCReportingHistogram *_videoTxFecLevel;
}

- (id)init;
- (void)dealloc;
- (void)accumulate:(id)a0;
- (void)updateReport:(id)a0;
- (void)updateReport:(id)a0 withStreamGroup:(id)a1;
- (void)updateWithPayload:(id)a0;
- (void)updateWithPayload:(id)a0 blockFecLevels:(unsigned int)a1;

@end
