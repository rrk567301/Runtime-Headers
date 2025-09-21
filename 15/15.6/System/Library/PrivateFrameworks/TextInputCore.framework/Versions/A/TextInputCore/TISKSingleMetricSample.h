@class NSMutableArray;

@interface TISKSingleMetricSample : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *samples;

+ (id)makeMetric;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)size;
- (void)addSample:(id)a0;
- (void)merge:(id)a0;
- (double)variance;
- (double)average;
- (double)sum;
- (id)generateDataForSR:(id)a0 dropSampleSize:(char)a1;

@end
