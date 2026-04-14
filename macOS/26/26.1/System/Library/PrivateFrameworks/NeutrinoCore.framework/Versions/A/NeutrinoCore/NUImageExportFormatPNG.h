@interface NUImageExportFormatPNG : NUImageExportFormat

@property BOOL preserveAlpha;

- (id)fileType;
- (id)pixelFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
