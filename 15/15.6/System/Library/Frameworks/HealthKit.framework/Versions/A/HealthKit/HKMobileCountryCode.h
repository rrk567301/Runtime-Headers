@class NSString, NSDate;

@interface HKMobileCountryCode : NSObject <HKCurrentCountryCode>

@property (readonly, copy, nonatomic) NSString *code;
@property (readonly, copy, nonatomic) NSString *ISOCode;
@property (readonly, nonatomic, getter=isOverridden) char overridden;
@property (readonly, nonatomic) long long provenance;
@property (readonly, copy, nonatomic) NSDate *timestamp;

- (id)description;
- (void).cxx_destruct;
- (id)countryCode;
- (id)initWithMobileCountryCode:(id)a0 ISOCode:(id)a1 isOverridden:(char)a2;

@end
