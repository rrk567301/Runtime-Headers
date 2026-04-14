@class NSDictionary, NSData, NSDate, NSNumber;

@interface WiFiAwareDatapathPerformanceReport : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSData *localTimestamp;
@property (readonly, nonatomic) NSNumber *throughputCeilingMbps;
@property (readonly, nonatomic) NSNumber *throughputCapacityMbps;
@property (readonly, nonatomic) NSDictionary *txLatency;
@property (readonly, nonatomic) NSNumber *signalStrength;
@property (readonly, nonatomic) double durationActive;

+ (id)performanceFor:(unsigned char)a0 datapathType:(long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTimestamp:(id)a0 localTimestamp:(id)a1 throughputCeilingMbps:(id)a2 throughputCapacityMbps:(id)a3 txLatency:(id)a4 signalStrength:(id)a5 durationActive:(double)a6;

@end
