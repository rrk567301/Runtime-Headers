@class MPModelTVSeasonKind;

@interface MPModelTVShowKind : MPModelKind

@property (readonly, copy, nonatomic) MPModelTVSeasonKind *seasonKind;

+ (BOOL)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithSeasonKind:(id)a0;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)humanDescription;
- (void).cxx_destruct;
- (id)msv_initWithJSONValue:(id)a0;
- (id)msv_jsonValue;

@end
