@class NSSet;

@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy {
    NSSet *_mergedPolicies;
}

- (id)init;
- (void)addPolicy:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_ensureFullLocalizationDictionaryIsLoaded;

@end
