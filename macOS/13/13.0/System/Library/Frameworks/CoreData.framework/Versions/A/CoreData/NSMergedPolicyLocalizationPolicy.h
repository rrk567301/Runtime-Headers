@class NSSet;

@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy {
    NSSet *_mergedPolicies;
}

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_ensureFullLocalizationDictionaryIsLoaded;
- (void)addPolicy:(id)a0;

@end
