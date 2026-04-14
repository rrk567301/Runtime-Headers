@class NSArray, NSDictionary;

@interface HKCountrySet : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *countryBitmasks;
@property (readonly, nonatomic) long long compatibilityVersion;
@property (readonly, nonatomic) long long contentVersion;
@property (readonly, nonatomic) long long provenance;
@property (readonly, copy, nonatomic) NSArray *allCountryCodes;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (long long)isRegionCodeFound:(id)a0 availabilityWatch:(id)a1 availabilityPhone:(id)a2;
+ (id)bitmaskPathForCountryCode:(id)a0;
+ (id)countryCodeForBitmaskPath:(id)a0;
+ (id)countryCodesForCountryBitmasks:(id)a0;
+ (id)emptyCountrySet;
+ (id)regionsWithPlistAtURL:(id)a0 error:(id *)a1;
+ (id)countrySetWithPlistURL:(id)a0 error:(id *)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0 provenance:(long long)a1;
- (id)initWithCountryBitmasks:(id)a0 compatibilityVersion:(long long)a1 contentVersion:(long long)a2 provenance:(long long)a3;
- (id)initWithSupportedCountryCodes:(id)a0 contentVersion:(long long)a1;
- (id)initWithSupportedCountryCodes:(id)a0 contentVersion:(long long)a1 provenance:(long long)a2;
- (BOOL)containsCountryCode:(id)a0;
- (id)countrySetByIntersectingCountriesInSet:(id)a0;
- (id)countrySetByAddingCountriesInSet:(id)a0;
- (id)countrySetByRemovingCountriesInSet:(id)a0;

@end
