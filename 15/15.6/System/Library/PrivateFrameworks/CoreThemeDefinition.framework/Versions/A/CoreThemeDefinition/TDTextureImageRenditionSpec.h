@class TDTextureAsset, TDTextureMipLevel, TDThemeCompressionType, TDTextureRenditionSpec;

@interface TDTextureImageRenditionSpec : TDRenditionSpec

@property (nonatomic) char flipped;
@property (retain, nonatomic) TDTextureAsset *asset;
@property (retain, nonatomic) TDTextureMipLevel *textureLevelAssignment;
@property (retain, nonatomic) TDThemeCompressionType *compressionType;
@property (readonly, nonatomic) TDTextureRenditionSpec *texture;
@property (readonly, nonatomic) long long textureFormat;

- (char)isCubeMap;
- (struct CGImage { } *)_createImageRefWithURL:(id)a0 andDocument:(id)a1 format:(int *)a2;
- (int)_pixelFormatOfCGImage:(struct CGImage { } *)a0;
- (id)associatedFileModificationDateWithDocument:(id)a0;
- (char)canBePackedWithDocument:(id)a0;
- (id)createCSIRepresentationWithCompression:(char)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;
- (id)textureFacesWithDocument:(id)a0;
- (char)updatePackingPropertiesWithDocument:(id)a0;

@end
