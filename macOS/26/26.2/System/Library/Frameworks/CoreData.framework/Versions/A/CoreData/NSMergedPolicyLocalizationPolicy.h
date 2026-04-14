@class NSSet;

@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy {
    NSSet *_mergedPolicies;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addPolicy:(id)a0;
- (id)init;
- (void)_ensureFullLocalizationDictionaryIsLoaded;
- (void)dealloc;

@end
