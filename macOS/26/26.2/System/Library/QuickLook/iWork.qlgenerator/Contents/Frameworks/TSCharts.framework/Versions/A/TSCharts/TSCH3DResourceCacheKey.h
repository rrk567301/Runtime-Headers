@class TSCH3DResource, TSCH3DResourceLoader;

@interface TSCH3DResourceCacheKey : NSObject <NSCopying> {
    long long _virtualScreen;
}

@property (readonly, nonatomic) TSCH3DResourceLoader *loader;
@property (readonly, nonatomic) TSCH3DResource *resource;

+ (id)keyWithLoader:(id)a0 resource:(id)a1 virtualScreen:(long long)a2;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLoader:(id)a0 resource:(id)a1 virtualScreen:(long long)a2;

@end
