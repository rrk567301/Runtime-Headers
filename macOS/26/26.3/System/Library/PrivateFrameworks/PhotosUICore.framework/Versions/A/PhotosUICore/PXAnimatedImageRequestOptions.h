@interface PXAnimatedImageRequestOptions : PXImageRequestOptions

@property (nonatomic) BOOL allowPreCaching;
@property (nonatomic) BOOL useSharedImageDecoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)photoKitRequestOptions;

@end
