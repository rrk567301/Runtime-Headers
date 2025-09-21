@interface STRestrictionsConverter : NSObject

+ (long long)imageGenerationRestrictionFromRestrictions:(id)a0;
+ (id)numberByAgePresetKeyExcludingImageGenerationForRestrictions:(id)a0;
+ (id)numberByAgePresetKeyForRestrictions:(id)a0;
+ (id)restrictionsWithIsEnabled:(BOOL)a0 valueByAgePresetKey:(id)a1;
+ (id)updatedRestrictions:(id)a0 withImageGenerationRestriction:(long long)a1;
+ (id)updatedRestrictions:(id)a0 withValueByAgePresetKey:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
