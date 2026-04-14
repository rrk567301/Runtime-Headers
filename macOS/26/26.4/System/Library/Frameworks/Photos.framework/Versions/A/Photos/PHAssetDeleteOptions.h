@interface PHAssetDeleteOptions : NSObject <NSCopying>

@property (nonatomic) BOOL shouldExpungeFromLocalStorageOnly;
@property (nonatomic) long long expungeSource;
@property (nonatomic) long long trashSource;

- (id)initWithXPCDict:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeToXPCDict:(id)a0;

@end
