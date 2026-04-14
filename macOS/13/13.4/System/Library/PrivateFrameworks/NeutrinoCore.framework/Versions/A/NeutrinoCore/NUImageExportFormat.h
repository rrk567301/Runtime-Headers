@interface NUImageExportFormat : NSObject <NSCopying>

+ (id)defaultFormatForURL:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fileType;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;
- (int)renderFormat;

@end
