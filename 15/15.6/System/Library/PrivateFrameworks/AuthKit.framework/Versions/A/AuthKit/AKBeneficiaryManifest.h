@class NSArray, NSDictionary;

@interface AKBeneficiaryManifest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *accessibleBundleInformation;
@property (readonly, nonatomic) long long manifestOptions;
@property (readonly, nonatomic) NSDictionary *parsableRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_bundleTypeFrom:(unsigned long long)a0;
- (char)_isAllOptionsSelected;
- (id)initWithBundleInformation:(id)a0 manifestOptions:(long long)a1;

@end
