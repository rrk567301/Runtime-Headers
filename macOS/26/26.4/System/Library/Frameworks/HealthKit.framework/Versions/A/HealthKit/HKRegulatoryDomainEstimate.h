@class NSString, NSDate;

@interface HKRegulatoryDomainEstimate : NSObject <NSCopying, HKCurrentCountryCode>

@property (readonly, copy, nonatomic) NSString *ISOCode;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) long long provenance;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithISOCode:(id)a0 timestamp:(id)a1 provenance:(long long)a2;

@end
