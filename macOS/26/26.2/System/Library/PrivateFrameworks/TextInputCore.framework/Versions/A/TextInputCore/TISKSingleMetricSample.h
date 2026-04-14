@class NSMutableArray;

@interface TISKSingleMetricSample : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *samples;

+ (id)makeMetric;

- (double)average;
- (id)initWithCoder:(id)a0;
- (void)addSample:(id)a0;
- (void)merge:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)size;
- (BOOL)isEmpty;
- (id)init;
- (double)variance;
- (double)sum;
- (id)generateDataForSR:(id)a0 dropSampleSize:(BOOL)a1;

@end
