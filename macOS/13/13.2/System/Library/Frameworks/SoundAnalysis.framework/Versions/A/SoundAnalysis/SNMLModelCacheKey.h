@class NSArray;

@interface SNMLModelCacheKey : NSObject <NSCopying> {
    NSArray *_keys;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
