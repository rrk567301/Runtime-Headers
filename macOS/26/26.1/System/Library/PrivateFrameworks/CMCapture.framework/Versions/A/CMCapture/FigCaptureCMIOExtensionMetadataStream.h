@interface FigCaptureCMIOExtensionMetadataStream : FigCaptureCMIOExtensionStream

- (BOOL)authorizedToStartStreamForClient:(id)a0;
- (BOOL)startStreamAndReturnError:(id *)a0;
- (void)configureStream;
- (void)createCMIOStreamProperties;

@end
