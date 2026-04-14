@class NSString, NSDate;

@interface HKRegulatoryDomainEstimate : NSObject <NSCopying, HKCurrentCountryCode>

@property (readonly, copy, nonatomic) NSString *ISOCode;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) long long provenance;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithISOCode:(id)a0 timestamp:(id)a1 provenance:(long long)a2;

@end
