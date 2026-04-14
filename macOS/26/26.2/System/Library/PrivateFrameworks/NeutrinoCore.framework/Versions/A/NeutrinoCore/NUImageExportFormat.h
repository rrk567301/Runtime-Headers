@interface NUImageExportFormat : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL supportsHDR;

+ (id)defaultFormatForURL:(id)a0;

- (id)fileType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)pixelFormat;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
