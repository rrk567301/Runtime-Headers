@class NSMutableDictionary;

@interface CDMAssetsUsages : NSObject {
    NSMutableDictionary *_usages;
}

+ (id)cdmAssetsUsageKeyToString:(long long)a0;
+ (char)usesLanguageCode:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (char)addUsageForKey:(long long)a0 withAssetUsageValue:(id)a1;
- (id)getRawUsages;
- (id)getUsages;

@end
