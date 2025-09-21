@class NSMutableArray;

@interface TISKPositionalMetricSample : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *positionalMetricSample;

+ (id)makeMetric:(unsigned long long)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)size;
- (void)merge:(id)a0;
- (id)description:(char)a0;
- (void)addSample:(id)a0 withPosition:(unsigned long long)a1;
- (id)generateDataForSR:(id)a0;
- (id)singleMetricSample:(unsigned long long)a0;

@end
