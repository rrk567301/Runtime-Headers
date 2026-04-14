@class NSSet;

@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy {
    NSSet *_mergedPolicies;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)addPolicy:(id)a0;
- (void)_ensureFullLocalizationDictionaryIsLoaded;

@end
