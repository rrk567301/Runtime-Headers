@interface NUImageExportFormatTIFF : NUImageExportFormat

@property long long pixelType;
@property long long compression;
@property BOOL preserveAlpha;

- (int)depth;
- (id)pixelFormat;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fileType;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
