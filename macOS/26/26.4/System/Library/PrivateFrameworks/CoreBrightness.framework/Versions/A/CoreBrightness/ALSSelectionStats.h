@class CBHistogramBuilder, NSMutableDictionary;

@interface ALSSelectionStats : NSObject {
    int currentALSOrientation;
    int currentALSPlacement;
    double deltas[12];
    double time[18];
    CBHistogramBuilder *luxTimeHistograms[18];
    float startTime;
    float lastEvalTime;
    unsigned int nSwaps;
    NSMutableDictionary *samples;
    float currentLux;
}

- (id)init;
- (void)submit;
- (void)dealloc;
- (int)calculateIndexForOrientation:(int)a0 placement:(int)a1;
- (void)recordALSSwapWithOrientation:(int)a0 andPlacement:(int)a1 andLux:(float)a2;
- (void)recordTime;
- (void)recordTimeForCurrentALS;
- (void)resetStats;
- (void)updateStatsDisplayOff;
- (void)updateStatsWithOrientation:(int)a0 andLux:(float)a1 andPlacement:(int)a2;
- (void)updateTimeWithOrientation:(int)a0 andPlacement:(int)a1 andLux:(float)a2;
- (int)validateOrientation:(int)a0;
- (int)validatePlacement:(int)a0;

@end
