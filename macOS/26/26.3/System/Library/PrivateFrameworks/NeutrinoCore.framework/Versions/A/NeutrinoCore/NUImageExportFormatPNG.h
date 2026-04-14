@interface NUImageExportFormatPNG : NUImageExportFormat

@property BOOL preserveAlpha;

- (id)pixelFormat;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fileType;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
