@class NSTextField, NSString, NSProgressIndicator, IOBluetoothDevice, IOBluetoothTransferProgressUI, OBEXFileTransferServices, NSMutableArray, NSImageView, NSButton, IOBluetoothOBEXSession;

@interface OBEXObjectReceiveConcreteWindowController : NSWindowController {
    NSTextField *mFileStatusField;
    NSTextField *mFileTransferredField;
    NSTextField *mFileRemainingField;
    NSProgressIndicator *mFileProgressIndicator;
    NSButton *mFileAbortButton;
    NSImageView *mFileIconView;
    id mDelegate;
    NSMutableArray *mRemoteFileNames;
    NSString *mDestinationPath;
    int mCurrentFileIndex;
    OBEXFileTransferServices *mFTPModule;
    IOBluetoothOBEXSession *mOBEXSession;
    IOBluetoothDevice *mTargetDevice;
    BOOL mTargetIsAMac;
    BOOL mIsVCardTransfer;
    BOOL mIsSendingPanel;
    BOOL mDoesMultipleTransfers;
    IOBluetoothTransferProgressUI *mTransferProgress;
    unsigned int mFirstPacketSize;
    unsigned short mMaxPacketLength;
    BOOL mIsFirstPutPacket;
    BOOL mUserAborted;
    BOOL mErrorDialogIsUp;
    int mPanelRunState;
    NSString *mWindowTitle;
    struct _NSModalSession { } *mModalSession;
}

- (void)finalize;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)runModal;
- (void)stop;
- (void)awakeFromNib;
- (int)beginSheetModalForWindow:(id)a0 modalDelegate:(id)a1 didEndSelector:(SEL)a2 contextInfo:(void *)a3;
- (id)windowNibName;
- (void)windowDidLoad;
- (id)windowTitleForDocumentDisplayName:(id)a0;
- (id)getDevice;
- (void)fileTransferServicesConnectionComplete:(id)a0 error:(int)a1;
- (void)fileTransferServicesDisconnectionComplete:(id)a0 error:(int)a1;
- (void)fileTransferServicesAbortComplete:(id)a0 error:(int)a1;
- (void)fileTransferServicesCopyRemoteFileProgress:(id)a0 transferProgress:(id)a1;
- (void)fileTransferServicesCopyRemoteFileComplete:(id)a0 error:(int)a1;
- (id)getTitle;
- (id)locString:(id)a0;
- (id)initObjectReceiveWithBluetoothDevice:(id)a0 targetFiles:(id)a1 destination:(id)a2 delegate:(id)a3;
- (id)initObjectReceiveWithBluetoothDevice:(id)a0 defaultVCardName:(id)a1 destination:(id)a2 delegate:(id)a3;
- (void)runPanel;
- (void)setIconImage:(id)a0;
- (void)closePanel;
- (int)openOBEXConnection;
- (void)stopTransfer:(id)a0;
- (id)currentFilePathAndName;
- (void)setIconForType:(unsigned int)a0;
- (void)closeUpShop;
- (void)errorPanelButtonClick:(id)a0;
- (void)adjustUIForTransferOperationConclusion:(id)a0;
- (id)currentFileName;
- (void)adjustUIForTransferOperationConclusionWithError:(int)a0;
- (int)closeOBEXConnection;
- (int)getFileFromRemoteDevice;
- (void)setIconForCurrentFile;

@end
