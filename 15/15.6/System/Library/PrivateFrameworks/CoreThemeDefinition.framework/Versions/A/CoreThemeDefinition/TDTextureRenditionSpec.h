@class NSSet, TDThemeCompressionType, TDTexturePixelFormat;

@interface TDTextureRenditionSpec : TDRenditionSpec

@property (nonatomic) char cubeMap;
@property (retain, nonatomic) NSSet *mipLevels;
@property (retain, nonatomic) TDThemeCompressionType *compressionType;
@property (retain, nonatomic) TDTexturePixelFormat *pixelFormat;

- (char)canBePackedWithDocument:(id)a0;
- (id)createCSIRepresentationWithCompression:(char)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;

@end
