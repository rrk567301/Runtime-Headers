@class NSTextField, NSProgressIndicator, IOBluetoothDevice, NSString, NSTimer, IOBluetoothTransferProgressUI, NSPanel, NSMutableArray, OBEXFileTransferServices, NSImageView, NSButton;

@interface IOBluetoothConcreteObjectPush : NSWindowController {
    NSTextField *mFileStatusField;
    NSTextField *mFileTransferredField;
    NSTextField *mFileRemainingField;
    NSProgressIndicator *mFileProgressIndicator;
    NSButton *mFileAbortButton;
    NSImageView *mFileIconView;
    id mDelegate;
    NSMutableArray *mFileRefs;
    int mCurrentFileIndex;
    OBEXFileTransferServices *mFTPModule;
    BOOL mTargetIsAMac;
    BOOL mIsOPSender;
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
    NSTimer *mAbortTimer;
    NSPanel *mTimeoutSheet;
}

@property (retain) IOBluetoothDevice *device;

+ (BOOL)targetSupportsReceivingFiles:(id)a0 viaOPP:(id)a1;

- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)runModal;
- (void)setTitle:(id)a0;
- (void)stop;
- (void)awakeFromNib;
- (id)windowNibName;
- (int)beginSheetModalForWindow:(id)a0 modalDelegate:(id)a1 didEndSelector:(SEL)a2 contextInfo:(void *)a3;
- (void)windowDidLoad;
- (id)windowTitleForDocumentDisplayName:(id)a0;
- (void)fileTransferServicesConnectionComplete:(id)a0 error:(int)a1;
- (void)fileTransferServicesDisconnectionComplete:(id)a0 error:(int)a1;
- (void)fileTransferServicesAbortComplete:(id)a0 error:(int)a1;
- (void)fileTransferServicesSendFileProgress:(id)a0 transferProgress:(id)a1;
- (void)fileTransferServicesFilePreparationComplete:(id)a0 error:(int)a1;
- (void)fileTransferServicesSendFileComplete:(id)a0 error:(int)a1;
- (id)getDevice;
- (id)getTitle;
- (id)locString:(id)a0;
- (void)runPanel;
- (void)setIconImage:(id)a0;
- (void)closeUpShop;
- (void)errorPanelButtonClick:(id)a0;
- (void)setIconForCurrentFile;
- (void)setIconForType:(unsigned int)a0;
- (void)stopTransfer:(id)a0;
- (void)closePanel;
- (void)adjustUIForTransferOperationConclusionWithError:(int)a0;
- (int)openOBEXConnection;
- (int)closeOBEXConnection;
- (void)retrySheetDidEnd:(id)a0 returnCode:(int)a1 contextInfo:(void *)a2;
- (void)abortTimerFired:(id)a0;
- (void)timeoutSheetDidEnd:(id)a0 returnCode:(int)a1 contextInfo:(void *)a2;
- (void)adjustUIForTransferOperationTimeOutError:(id)a0;
- (int)sendFileToRemoteDevice;
- (id)initObjectPushWithBluetoothDevice:(id)a0 withFiles:(id)a1 delegate:(id)a2;
- (id)newModuleForFiles:(id)a0 isFirstRun:(BOOL)a1;
- (void)createFileRefsForPaths:(id)a0;
- (BOOL)validateFiles;
- (id)currentFile;
- (BOOL)isTransferInProgress;
- (void)cancelAbortTimer;

@end
