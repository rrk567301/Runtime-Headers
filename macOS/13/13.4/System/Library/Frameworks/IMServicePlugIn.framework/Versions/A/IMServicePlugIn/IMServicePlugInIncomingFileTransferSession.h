@interface IMServicePlugInIncomingFileTransferSession : IMServicePlugInFileTransferSession

- (void)setContainerName:(id)a0;
- (void)addIncomingFileTransfer:(id)a0;
- (id)incomingFileTransferForPath:(id)a0;
- (id)incomingFileTransfers;

@end
