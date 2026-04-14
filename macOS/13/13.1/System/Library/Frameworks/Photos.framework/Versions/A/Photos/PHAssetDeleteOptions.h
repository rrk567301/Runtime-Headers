@interface PHAssetDeleteOptions : NSObject <NSCopying>

@property (nonatomic) BOOL shouldExpungeFromLocalStorageOnly;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithXPCDict:(id)a0;
- (void)encodeToXPCDict:(id)a0;

@end
