@class NSArray;

@interface SNMLModelCacheKey : NSObject <NSCopying> {
    NSArray *_keys;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithKeys:(id)a0;
- (BOOL)isEqualToModelCacheKey:(id)a0;
- (id)initWithModelClass:(Class)a0 modelConfiguration:(id)a1;

@end
