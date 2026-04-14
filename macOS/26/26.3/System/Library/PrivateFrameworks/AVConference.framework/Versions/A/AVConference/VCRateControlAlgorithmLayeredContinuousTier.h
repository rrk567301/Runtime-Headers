@interface VCRateControlAlgorithmLayeredContinuousTier : VCRateControlAlgorithmStabilizedNOWRD {
    double _bandwidthWall;
    int _bandwidthWallConfidence;
    double _speedFactor;
    double _previousRateControlTime;
    double _congestionSeverity;
    BOOL _shouldRampUp;
    BOOL _shouldRampDown;
}

- (id)init;
- (void)dealloc;
- (BOOL)setUpVTable;

@end
