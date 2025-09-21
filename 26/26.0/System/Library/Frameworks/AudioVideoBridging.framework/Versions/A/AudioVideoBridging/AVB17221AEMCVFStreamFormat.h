@interface AVB17221AEMCVFStreamFormat : AVB17221AEMAVTPDefinedStreamFormat

@property unsigned char headerVersion;
@property (readonly) unsigned char format;
@property (readonly) unsigned char formatSubtype;

+ (id)keyPathsForValuesAffectingFormat;
+ (id)keyPathsForValuesAffectingFormatSubtype;
+ (id)keyPathsForValuesAffectingHeaderVersion;

- (id)init;
- (void)setFormat:(unsigned char)a0;
- (unsigned char)format;
- (unsigned char)formatSubtype;
- (BOOL)isSupportedFormat;
- (BOOL)isVideoFormat;
- (void)setFormatSubtype:(unsigned char)a0;

@end
