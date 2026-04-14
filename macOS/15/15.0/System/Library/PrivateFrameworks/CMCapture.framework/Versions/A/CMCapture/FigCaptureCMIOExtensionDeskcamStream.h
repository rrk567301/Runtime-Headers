@interface FigCaptureCMIOExtensionDeskcamStream : FigCaptureCMIOExtensionStream

- (BOOL)startStreamAndReturnError:(id *)a0;
- (void)configureStream;
- (void)createCMIOStreamProperties;

@end
