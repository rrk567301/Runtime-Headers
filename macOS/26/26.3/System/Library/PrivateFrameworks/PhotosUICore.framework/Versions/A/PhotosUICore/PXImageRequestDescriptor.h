@class PXImageRequestOptions;
@protocol PXDisplayAsset;

@interface PXImageRequestDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) long long contentMode;
@property (readonly, copy, nonatomic) PXImageRequestOptions *options;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;

@end
