@class NSMutableDictionary;

@interface ECIntToTwoIntKeyCache : NSObject {
    NSMutableDictionary *mCache;
}

+ (id)keyForKey1:(unsigned long long)a0 key2:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (void)setObject:(unsigned long long)a0 forKey1:(unsigned long long)a1 key2:(unsigned long long)a2;
- (BOOL)integerIsPresentForKey1:(unsigned long long)a0 key2:(unsigned long long)a1 outValue:(unsigned long long *)a2;

@end
