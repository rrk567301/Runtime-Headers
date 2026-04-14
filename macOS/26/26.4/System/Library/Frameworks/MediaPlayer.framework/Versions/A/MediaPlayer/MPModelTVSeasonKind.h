@class MPModelTVEpisodeKind;

@interface MPModelTVSeasonKind : MPModelKind

@property (readonly, nonatomic) MPModelTVEpisodeKind *episodeKind;

+ (BOOL)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithEpisodeKind:(id)a0;

- (id)humanDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)msv_initWithJSONValue:(id)a0;
- (id)msv_jsonValue;

@end
