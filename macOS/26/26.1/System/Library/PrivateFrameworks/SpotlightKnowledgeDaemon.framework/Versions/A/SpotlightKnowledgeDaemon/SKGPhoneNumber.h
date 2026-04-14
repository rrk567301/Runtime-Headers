@class NSString, NSArray;

@interface SKGPhoneNumber : SKGEntity

@property (copy, nonatomic) NSString *phoneNumberValue;
@property (copy, nonatomic) NSArray *synonyms;
@property (nonatomic) long long countryCodeValue;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
