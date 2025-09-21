@class NSArray;

@interface NSConstraintCacheKey : NSObject <NSCopying> {
    NSArray *_values;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;

@end
