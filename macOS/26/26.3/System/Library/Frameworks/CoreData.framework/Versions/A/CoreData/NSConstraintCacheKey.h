@class NSArray;

@interface NSConstraintCacheKey : NSObject <NSCopying> {
    NSArray *_values;
}

- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
