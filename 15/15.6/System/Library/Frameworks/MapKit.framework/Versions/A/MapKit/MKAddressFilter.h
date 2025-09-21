@interface MKAddressFilter : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long _includedOptions;
    unsigned long long _excludedOptions;
}

@property (class, readonly, nonatomic) MKAddressFilter *filterIncludingAll;
@property (class, readonly, nonatomic) MKAddressFilter *filterExcludingAll;
@property (class, readonly) char supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_commaSeparatedListOfOptions:(unsigned long long)a0;
- (id)_geoAddressFilter;
- (char)excludesOptions:(unsigned long long)a0;
- (char)includesOptions:(unsigned long long)a0;
- (id)initExcludingOptions:(unsigned long long)a0;
- (id)initIncludingOptions:(unsigned long long)a0;
- (char)isEqualToAddressFilter:(id)a0;

@end
