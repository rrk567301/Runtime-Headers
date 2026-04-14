@interface CFPrefsCompatibilitySource : CFPrefsSource {
    BOOL _disabled;
}

- (struct __CFDictionary { } *)alreadylocked_copyDictionary;
- (struct __CFArray { } *)alreadylocked_copyKeyList;
- (void *)alreadylocked_copyValueForKey:(struct __CFString { } *)a0;
- (void)mergeIntoDictionary:(struct __CFDictionary { } *)a0 sourceDictionary:(struct __CFDictionary { } *)a1 cloudKeyEvaluator:(id /* block */)a2;

@end
