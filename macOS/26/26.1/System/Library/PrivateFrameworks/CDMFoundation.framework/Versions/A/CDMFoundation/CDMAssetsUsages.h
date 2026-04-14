@class NSMutableDictionary;

@interface CDMAssetsUsages : NSObject {
    NSMutableDictionary *_usages;
}

+ (id)cdmAssetsUsageKeyToString:(long long)a0;
+ (BOOL)usesLanguageCode:(long long)a0;

- (void).cxx_destruct;
- (id)init;
- (BOOL)addUsageForKey:(long long)a0 withAssetUsageValue:(id)a1;
- (id)getRawUsages;
- (id)getUsages;

@end
