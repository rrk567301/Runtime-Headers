@interface PHAnimatedImageRequestOptions : PHImageRequestOptions

@property (nonatomic) char allowPreCaching;
@property (nonatomic) char useSharedImageDecoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
