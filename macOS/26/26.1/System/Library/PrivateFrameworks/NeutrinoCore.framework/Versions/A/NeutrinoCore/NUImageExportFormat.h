@interface NUImageExportFormat : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL supportsHDR;

+ (id)defaultFormatForURL:(id)a0;

- (id)fileType;
- (id)pixelFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
