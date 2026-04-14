@interface SFProximityEstimatorMaxOfMean : SFProximityEstimator {
    char *_channelNumberArray;
    char *_rssiArray;
    unsigned int _rssiCount;
    unsigned int _rssiIndex;
    unsigned int _rssiMinCount;
}

- (id)description;
- (int)_estimateRSSIForSFBLEDevice:(id)a0;
- (void)dealloc;
- (id)initWithProximityInfo:(id)a0;

@end
