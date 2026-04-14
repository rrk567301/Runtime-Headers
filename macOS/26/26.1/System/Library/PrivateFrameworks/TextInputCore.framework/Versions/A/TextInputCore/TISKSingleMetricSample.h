@class NSMutableArray;

@interface TISKSingleMetricSample : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *samples;

+ (id)makeMetric;

- (void)merge:(id)a0;
- (unsigned long long)size;
- (void)encodeWithCoder:(id)a0;
- (double)average;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addSample:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEmpty;
- (id)init;
- (double)variance;
- (double)sum;
- (id)generateDataForSR:(id)a0 dropSampleSize:(BOOL)a1;

@end
