@interface NUImageExportFormatHEIF : NUImageExportFormat

@property (nonatomic) long long bitDepth;

- (id)fileType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)pixelFormat;
- (BOOL)supportsHDR;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;
- (id)initWithBitDepth:(long long)a0;

@end
