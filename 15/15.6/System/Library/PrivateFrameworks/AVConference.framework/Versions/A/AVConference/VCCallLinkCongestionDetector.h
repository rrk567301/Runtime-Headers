@interface VCCallLinkCongestionDetector : NSObject {
    double rttThreshold;
    double lossRateThreshold;
}

@property (nonatomic) char isLinkCongested;

- (void)addNewRTT:(double)a0 packetLossRate:(double)a1 timestamp:(double)a2;
- (id)initWithRTTThreshold:(double)a0 lossRateThreshold:(double)a1;

@end
