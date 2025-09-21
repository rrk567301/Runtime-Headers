@class NSArray, NSDictionary;

@interface HKCountrySet : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *countryBitmasks;
@property (readonly, nonatomic) long long compatibilityVersion;
@property (readonly, nonatomic) long long contentVersion;
@property (readonly, nonatomic) long long provenance;
@property (readonly, copy, nonatomic) NSArray *allCountryCodes;
@property (readonly, nonatomic, getter=isEmpty) char empty;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)countryCodesForCountryBitmasks:(id)a0;
+ (id)emptyCountrySet;
+ (id)bitmaskPathForCountryCode:(id)a0;
+ (id)countryCodeForBitmaskPath:(id)a0;
+ (id)countrySetWithPlistURL:(id)a0 error:(id *)a1;
+ (long long)isRegionCodeFound:(id)a0 availabilityWatch:(id)a1 availabilityPhone:(id)a2;
+ (id)regionsWithPlistAtURL:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)containsCountryCode:(id)a0;
- (id)countrySetByAddingCountriesInSet:(id)a0;
- (id)countrySetByIntersectingCountriesInSet:(id)a0;
- (id)countrySetByRemovingCountriesInSet:(id)a0;
- (id)initWithCountryBitmasks:(id)a0 compatibilityVersion:(long long)a1 contentVersion:(long long)a2 provenance:(long long)a3;
- (id)initWithDictionaryRepresentation:(id)a0 provenance:(long long)a1;
- (id)initWithSupportedCountryCodes:(id)a0 contentVersion:(long long)a1;
- (id)initWithSupportedCountryCodes:(id)a0 contentVersion:(long long)a1 provenance:(long long)a2;

@end
