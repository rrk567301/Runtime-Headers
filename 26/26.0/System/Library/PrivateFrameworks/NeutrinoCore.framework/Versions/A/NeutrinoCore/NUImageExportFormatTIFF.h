@interface NUImageExportFormatTIFF : NUImageExportFormat

@property long long pixelType;
@property long long compression;
@property BOOL preserveAlpha;

- (id)fileType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (int)depth;
- (id)pixelFormat;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
