@class NSMutableArray;

@interface TISKSingleMetricSample : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *samples;

+ (id)makeMetric;

- (void)merge:(id)a0;
- (BOOL)isEmpty;
- (id)description;
- (id)init;
- (double)average;
- (unsigned long long)size;
- (void)addSample:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (double)variance;
- (double)sum;
- (id)generateDataForSR:(id)a0 dropSampleSize:(BOOL)a1;

@end
