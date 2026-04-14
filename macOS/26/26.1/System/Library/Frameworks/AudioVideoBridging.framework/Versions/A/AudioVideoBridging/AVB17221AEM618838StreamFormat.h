@interface AVB17221AEM618838StreamFormat : AVB17221AEM61883StreamFormat

@property unsigned char videoMode;
@property unsigned char compressionMode;
@property unsigned char colorSpace;

+ (id)keyPathsForValuesAffectingColorSpace;
+ (id)keyPathsForValuesAffectingCompressionMode;
+ (id)keyPathsForValuesAffectingVideoMode;

- (unsigned char)colorSpace;
- (unsigned char)compressionMode;
- (void)setCompressionMode:(unsigned char)a0;
- (void)setColorSpace:(unsigned char)a0;
- (id)init;
- (BOOL)isSupportedFormat;
- (BOOL)isVideoFormat;
- (unsigned int)maximumPDUSize;
- (void)setVideoMode:(unsigned char)a0;
- (unsigned char)videoMode;

@end
