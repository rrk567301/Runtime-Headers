@interface NUImageExportFormatHEIF : NUImageExportFormat

@property (nonatomic) long long bitDepth;

- (id)pixelFormat;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fileType;
- (BOOL)supportsHDR;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;
- (id)initWithBitDepth:(long long)a0;

@end
