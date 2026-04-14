@interface VCRateControlAlgorithmLayeredContinuousTier : VCRateControlAlgorithmStabilizedNOWRD {
    double _bandwidthWall;
    int _bandwidthWallConfidence;
    double _speedFactor;
    double _previousRateControlTime;
    double _congestionSeverity;
    BOOL _shouldRampUp;
    BOOL _shouldRampDown;
}

- (void)dealloc;
- (id)init;
- (BOOL)setUpVTable;

@end
