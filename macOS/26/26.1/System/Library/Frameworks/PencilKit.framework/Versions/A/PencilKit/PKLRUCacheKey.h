@class NSObject;
@protocol NSCopying;

@interface PKLRUCacheKey : NSObject <NSCopying>

@property (copy, nonatomic) NSObject<NSCopying> *key;
@property (nonatomic) long long scaleFactor;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
