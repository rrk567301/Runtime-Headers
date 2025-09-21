@class NSString, NSArray, NSData, NSDate;

@interface CWFLinkQualityMetric : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDate *updatedAt;
@property (readonly, nonatomic) long long RSSI;
@property (readonly, nonatomic) long long noise;
@property (readonly, nonatomic) double txRate;
@property (readonly, nonatomic) double rxRate;
@property (readonly, nonatomic) unsigned long long txPacketErrorRate;
@property (readonly, nonatomic) unsigned long long CCA;
@property (readonly, nonatomic) NSArray *mLOLinks;
@property (copy, nonatomic) NSData *linkQualityMetricData;

- (long long)noise;
- (unsigned long long)CCA;
- (long long)RSSI;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)JSONCompatibleKeyValueMap;
- (double)txRate;
- (void)encodeWithCoder:(id)a0;
- (double)rxRate;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToLinkQualityMetric:(id)a0;

@end
