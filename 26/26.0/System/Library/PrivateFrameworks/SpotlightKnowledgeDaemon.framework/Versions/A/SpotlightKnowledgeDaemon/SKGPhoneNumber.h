@class NSString, NSArray;

@interface SKGPhoneNumber : SKGEntity

@property (copy, nonatomic) NSString *phoneNumberValue;
@property (copy, nonatomic) NSArray *synonyms;
@property (nonatomic) long long countryCodeValue;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
