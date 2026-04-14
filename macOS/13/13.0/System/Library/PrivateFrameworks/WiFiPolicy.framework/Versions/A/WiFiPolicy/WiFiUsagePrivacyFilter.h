@interface WiFiUsagePrivacyFilter : NSObject

+ (void)initialize;
+ (BOOL)isInternalInstall;
+ (id)numberWithDuration:(double)a0;
+ (id)numberWithDurationMillisecond:(double)a0;
+ (id)timePercentage:(double)a0 overTotalDuration:(double)a1;
+ (id)twoSigFig:(unsigned long long)a0;
+ (id)numberWithByteCount:(unsigned long long)a0;
+ (id)numberWithFrameCount:(unsigned long long)a0;
+ (id)numberWithInstances:(unsigned long long)a0;
+ (id)localTimestamp:(id)a0;
+ (BOOL)canPerformActionWithSampleRate:(unsigned long long)a0;
+ (id)getBinFor:(long long)a0 In:(id)a1 WithLowestEdge:(id)a2 As:(unsigned long long)a3;
+ (id)getBinTimeInterval:(double)a0 As:(unsigned long long)a1;
+ (id)getHumanSeconds:(id)a0;
+ (id)getBinEvery10Over100:(unsigned long long)a0 As:(unsigned long long)a1;
+ (id)toHEXString:(char *)a0 length:(unsigned long long)a1;
+ (id)reformatMACAddress:(id)a0;
+ (id)oui:(id)a0;
+ (id)sanitizedOUI:(id)a0;
+ (id)bandAsString:(int)a0;
+ (int)bandFrom:(id)a0 Or:(id)a1;
+ (long long)getSumAllBands:(struct { long long x0[2]; BOOL x1[2]; })a0;
+ (struct { long long x0[2]; BOOL x1[2]; })getPercForIntegerByBand:(struct { long long x0[2]; BOOL x1[2]; })a0 Over:(unsigned long long)a1;
+ (struct { long long x0[2]; BOOL x1[2]; })getPercForFloatByBand:(struct { double x0[2]; BOOL x1[2]; })a0 Over:(double)a1;
+ (id)getSumArrayCountAllBand:(id)a0;
+ (struct { long long x0[2]; BOOL x1[2]; })getModeCountersByCandidatesByBand:(id)a0;
+ (id)getLabelForIntegerByBand:(struct { long long x0[2]; BOOL x1[2]; })a0 withCap:(BOOL)a1;
+ (id)getLabelForIntegerByBand:(struct { long long x0[2]; BOOL x1[2]; })a0;
+ (id)getLabelForIntegerByBand:(struct { long long x0[2]; BOOL x1[2]; })a0 In:(id)a1 WithLowestEdge:(id)a2 As:(unsigned long long)a3;
+ (id)getLabelForIntegerByBandTransition:(struct { long long x0[2][2]; BOOL x1[2][2]; })a0 In:(id)a1 WithLowestEdge:(id)a2 As:(unsigned long long)a3;
+ (id)getLabelForPercIntegerByBand:(struct { long long x0[2]; BOOL x1[2]; })a0;
+ (id)getLabelForNeighborsByBand:(id)a0;
+ (id)getLabelForBandUsageDuration:(struct { double x0[2]; BOOL x1[2]; })a0 overTotalDuration:(double)a1;
+ (id)getLabelForRssiByBand:(struct { long long x0[2]; BOOL x1[2]; })a0;
+ (id)getLabelForRssiDeltaByBand:(struct { long long x0[2]; BOOL x1[2]; })a0;
+ (id)getLabelForRssiDeltaByBandTransition:(struct { long long x0[2][2]; BOOL x1[2][2]; })a0;

@end
