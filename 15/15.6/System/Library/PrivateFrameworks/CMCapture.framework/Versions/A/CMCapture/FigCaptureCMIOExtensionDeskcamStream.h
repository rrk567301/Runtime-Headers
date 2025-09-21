@interface FigCaptureCMIOExtensionDeskcamStream : FigCaptureCMIOExtensionStream

- (char)startStreamAndReturnError:(id *)a0;
- (char)stopStreamAndReturnError:(id *)a0;
- (void)configureStream;
- (void)createCMIOStreamProperties;

@end
