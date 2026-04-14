@interface CSPhoneNumberTag : CSExternalAnalysisTag <CSCoderEncoder>

@property (readonly, nonatomic) long long countryCodeValue;

- (void)encodeWithCSCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPhoneNumber:(id)a0 synonyms:(id)a1 countryCode:(long long)a2 confidence:(double)a3;

@end
