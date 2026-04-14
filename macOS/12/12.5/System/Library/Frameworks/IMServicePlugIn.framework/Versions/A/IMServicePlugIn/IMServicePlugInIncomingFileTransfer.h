@class NSOutputStream;

@interface IMServicePlugInIncomingFileTransfer : IMServicePlugInFileTransfer

@property (readonly) NSOutputStream *outputStream;

- (void)resetOutputStream;

@end
