@class MPModelTVEpisodeKind;

@interface MPModelTVSeasonKind : MPModelKind

@property (readonly, nonatomic) MPModelTVEpisodeKind *episodeKind;

+ (BOOL)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithEpisodeKind:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)humanDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)msv_initWithJSONValue:(id)a0;
- (id)msv_jsonValue;

@end
