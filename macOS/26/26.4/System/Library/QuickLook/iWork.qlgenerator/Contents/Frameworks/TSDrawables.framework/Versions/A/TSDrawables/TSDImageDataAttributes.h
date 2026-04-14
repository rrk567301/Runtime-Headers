@class NSUUID, NSDate;

@interface TSDImageDataAttributes : TSPDataAttributes <TSKit.TSKWatermarkableAssetMetadataProviding>

@property (readonly, nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly, nonatomic) BOOL hasPixelSize;
@property (readonly, nonatomic) BOOL imageIsSRGB;
@property (readonly, nonatomic) BOOL hasImageIsSRGB;
@property (readonly, nonatomic) BOOL shouldBeInterpretedAsGenericIfUntagged;
@property (readonly, copy, nonatomic) NSUUID *mediaLibraryAssetID;
@property (readonly, nonatomic) BOOL mayNeedWatermark;
@property (readonly, copy, nonatomic) NSDate *insertionTimestamp;
@property (readonly, nonatomic) BOOL isDerivedFromOriginalAsset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithMessage:(const void *)a0;
- (struct CGSize { double x0; double x1; })size;
- (void)saveToMessage:(void *)a0;
- (id)copyResettingInsertionTimestamp;
- (id)copyWithIsSRGB:(BOOL)a0;
- (id)initWithIsSRGB:(BOOL)a0;
- (id)copyForDerivingFromOriginalAssetWithPixelSize:(struct CGSize { double x0; double x1; })a0;
- (id)copyMirroringTimestampFromBaseDataAttributes:(id)a0;
- (id)copyWithMediaLibraryAssetID:(id)a0 mayNeedWatermark:(BOOL)a1 insertionTimestamp:(id)a2 isDerivedFromOriginalAsset:(BOOL)a3;
- (id)copyWithPixelSize:(struct CGSize { double x0; double x1; })a0;
- (id)copyWithShouldBeInterpretedAsGenericIfUntagged:(BOOL)a0;
- (id)initWithMediaLibraryAssetID:(id)a0 mayNeedWatermark:(BOOL)a1 insertionTimestamp:(id)a2 isDerivedFromOriginalAsset:(BOOL)a3;
- (id)initWithPixelSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithShouldBeInterpretedAsGenericIfUntagged:(BOOL)a0;

@end
