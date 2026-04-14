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

- (double)txRate;
- (long long)noise;
- (id)initWithCoder:(id)a0;
- (long long)RSSI;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)JSONCompatibleKeyValueMap;
- (unsigned long long)CCA;
- (void).cxx_destruct;
- (double)rxRate;
- (BOOL)isEqualToLinkQualityMetric:(id)a0;

@end
