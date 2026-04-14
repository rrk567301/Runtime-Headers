@class NSArray;

@interface IMServicePlugInOutgoingFileTransferSession : IMServicePlugInFileTransferSession

@property (readonly) NSArray *outgoingFileTransfers;

- (id)outgoingFileTransferForPath:(id)a0;

@end
