@class NSMutableArray;

@interface TISKSingleMetricSample : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *samples;

+ (id)makeMetric;

- (double)average;
- (BOOL)isEmpty;
- (void)addSample:(id)a0;
- (void)merge:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)size;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (double)variance;
- (double)sum;
- (id)generateDataForSR:(id)a0 dropSampleSize:(BOOL)a1;

@end
