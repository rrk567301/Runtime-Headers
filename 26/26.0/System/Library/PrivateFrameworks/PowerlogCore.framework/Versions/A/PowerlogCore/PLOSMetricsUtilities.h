@interface PLOSMetricsUtilities : NSObject

+ (void)addCounter:(id)a0 withValue:(unsigned long long)a1;
+ (void)addDimensions:(id)a0 withKey:(id)a1 withValue:(id)a2;
+ (id)createCounter:(id)a0 withLabel:(id)a1;
+ (id)createCounter:(id)a0 withLabel:(id)a1 withDimensions:(id)a2 withFlags:(unsigned char)a3;
+ (id)createDimensions:(unsigned char)a0;
+ (id)createGauge:(id)a0 withLabel:(id)a1;
+ (id)createGauge:(id)a0 withLabel:(id)a1 withDimensions:(id)a2 withLevel:(unsigned char)a3 withFlags:(unsigned char)a4;
+ (id)createHistogram:(id)a0 withLabel:(id)a1 withBins:(unsigned char)a2 withInterval:(unsigned int)a3;
+ (id)createHistogram:(id)a0 withLabel:(id)a1 withDimensions:(id)a2 withLevel:(unsigned char)a3 withBins:(unsigned char)a4 withInterval:(unsigned int)a5 withFlags:(unsigned char)a6;
+ (id)createMetricGroup:(id)a0 withDimensions:(id)a1;
+ (void)setGauge:(id)a0 withValue:(double)a1;
+ (void)setHistogram:(id)a0 withValue:(double)a1;
+ (void)subtractCounter:(id)a0 withValue:(unsigned long long)a1;

@end
