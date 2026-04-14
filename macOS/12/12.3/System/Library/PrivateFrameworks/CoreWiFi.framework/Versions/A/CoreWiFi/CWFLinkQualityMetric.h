@class NSData, NSDate;

@interface CWFLinkQualityMetric : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *updatedAt;
@property (readonly, nonatomic) long long RSSI;
@property (readonly, nonatomic) long long noise;
@property (readonly, nonatomic) double txRate;
@property (readonly, nonatomic) double rxRate;
@property (readonly, nonatomic) float CCA;
@property (copy, nonatomic) NSData *linkQualityMetricData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)noise;
- (double)txRate;
- (long long)RSSI;
- (float)CCA;
- (double)rxRate;
- (BOOL)isEqualToLinkQualityMetric:(id)a0;

@end
