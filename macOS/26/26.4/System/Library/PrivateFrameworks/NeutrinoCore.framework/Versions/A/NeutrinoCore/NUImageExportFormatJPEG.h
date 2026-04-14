@interface NUImageExportFormatJPEG : NUImageExportFormat {
    double _compressionQuality;
}

@property (nonatomic) double compressionQuality;

- (id)fileType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)pixelFormat;
- (id)init;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
