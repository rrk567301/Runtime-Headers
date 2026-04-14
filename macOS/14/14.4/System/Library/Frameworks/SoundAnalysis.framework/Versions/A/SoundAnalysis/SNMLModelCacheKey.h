@interface SNMLModelCacheKey : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ keys;
}

@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithKeys:(id)a0;

@end
