@interface AVB17221AEMVideoSize : AVB17221AEMObject <NSCopying>

@property unsigned int videoSize;
@property unsigned short frameWidth;
@property unsigned short frameHeight;

+ (id)videoSizeForIIDCFrameFormat:(unsigned short)a0;
+ (id)keyPathsForValuesAffectingFrameWidth;
+ (id)keyPathsForValuesAffectingFrameHeight;
+ (id)_IIDCStandardSizes1G;
+ (id)_IIDCStandardSizes100M;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;
- (id)debugLogStringWithIndentation:(id)a0;
- (void)setFrameWidth:(unsigned short)a0;
- (unsigned short)frameWidth;
- (void)setFrameHeight:(unsigned short)a0;
- (unsigned short)frameHeight;
- (unsigned short)iidcVideoFormatWithColorSpace:(unsigned short)a0;
- (unsigned long long)pixelsPerFrame;
- (unsigned long long)bytesPerFrameWithColorSpace:(unsigned short)a0;
- (unsigned long long)iidcBytesPerPDUWithColorSpace:(unsigned short)a0;

@end
