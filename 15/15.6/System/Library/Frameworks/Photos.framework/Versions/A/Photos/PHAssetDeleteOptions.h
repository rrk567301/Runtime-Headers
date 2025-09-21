@interface PHAssetDeleteOptions : NSObject <NSCopying>

@property (nonatomic) char shouldExpungeFromLocalStorageOnly;
@property (nonatomic) long long expungeSource;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithXPCDict:(id)a0;
- (void)encodeToXPCDict:(id)a0;

@end
