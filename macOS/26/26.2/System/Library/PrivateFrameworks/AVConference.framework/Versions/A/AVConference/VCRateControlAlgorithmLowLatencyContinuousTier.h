@interface VCRateControlAlgorithmLowLatencyContinuousTier : VCRateControlAlgorithmLowLatencyNOWRD {
    unsigned int _previousTimestamp;
    double _previousRateControlTime;
    double _bandwidthWall;
    int _bandwidthWallConfidence;
    double _speedFactor;
    unsigned int _receiveBitrate;
    unsigned int _timestampWrapAroundCounter;
    double _minDelayDiff;
    BOOL _isSteadyStateReached;
    double _steadyStateCheckTime;
}

- (id)init;
- (void)dealloc;
- (BOOL)setUpVTable;

@end
