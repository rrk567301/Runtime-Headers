@interface NUImageExportFormatPNG : NUImageExportFormat

@property BOOL preserveAlpha;

- (id)fileType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)pixelFormat;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
