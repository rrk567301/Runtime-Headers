@interface NUImageExportFormatJPEG : NUImageExportFormat {
    double _compressionQuality;
}

@property (nonatomic) double compressionQuality;

- (id)fileType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)pixelFormat;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
