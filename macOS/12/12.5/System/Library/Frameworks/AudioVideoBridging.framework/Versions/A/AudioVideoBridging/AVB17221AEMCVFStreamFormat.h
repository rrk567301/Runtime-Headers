@interface AVB17221AEMCVFStreamFormat : AVB17221AEMAVTPDefinedStreamFormat

@property (readonly) unsigned char format;
@property (readonly) unsigned char formatSubtype;

+ (id)keyPathsForValuesAffectingFormat;
+ (id)keyPathsForValuesAffectingFormatSubtype;

- (id)init;
- (unsigned char)format;
- (void)setFormat:(unsigned char)a0;
- (BOOL)isSupportedVideoFormat;
- (BOOL)isVideoFormat;
- (void)setFormatSubtype:(unsigned char)a0;
- (unsigned char)formatSubtype;

@end
