@interface NUImageExportFormatPNG : NUImageExportFormat

@property BOOL preserveAlpha;

- (id)fileType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)pixelFormat;
- (id)init;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
