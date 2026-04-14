@interface NUImageExportFormatTIFF : NUImageExportFormat

@property long long pixelType;
@property long long compression;
@property BOOL preserveAlpha;

- (int)depth;
- (id)fileType;
- (id)pixelFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
