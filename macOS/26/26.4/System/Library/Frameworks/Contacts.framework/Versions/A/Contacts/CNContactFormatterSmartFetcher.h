@class NSSet, NSDictionary;

@interface CNContactFormatterSmartFetcher : CNSmartPropertyFetcher {
    NSSet *_mandatoryNameProperties;
    NSDictionary *_fallBackNamePropertyByNameKey;
}

@property (nonatomic) BOOL ignoresNickname;
@property (nonatomic) BOOL ignoresOrganization;

+ (BOOL)supportsSecureCoding;

- (void)_cn_executeGetterForRepresentedKeys:(id /* block */)a0;
- (id)_cn_ignorableKeys;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_cn_requiredKeys;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)_cn_optionalKeys;
- (id)initWithCoder:(id)a0;

@end
