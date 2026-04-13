@class NSInputStream;

@interface IMServicePlugInOutgoingFileTransfer : IMServicePlugInFileTransfer

@property (readonly) NSInputStream *inputStream;

- (id)init;
- (void)resetInputStream;

@end
