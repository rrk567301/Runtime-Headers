@interface IPAHistogramDifferencer : NSObject

- (struct CGImage { } *)newImage:(id)a0;
- (id)renderImage:(struct CGImage { } *)a0;
- (id)renderImageAtPath:(id)a0;
- (float)histogramChannelDifference:(unsigned long long *)a0 channel2:(unsigned long long *)a1 bucketCount:(long long)a2;
- (void)normalizeHistogram:(id)a0 scale:(float)a1;
- (void)normalizeHistograms:(id)a0 data2:(id)a1;
- (float)compareHistograms:(id)a0 data2:(id)a1;
- (float)computeDifferenceWithPath1:(id)a0 path2:(id)a1;
- (float)computeDifferenceWithImage1:(struct CGImage { } *)a0 image2:(struct CGImage { } *)a1;

@end
