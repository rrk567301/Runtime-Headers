@class NSString, NSTimer, IOBluetoothOBEXSession, BluetoothFileReference;

@interface OBEXFileTransferServices : NSObject {
    id mOBEXFileGet;
    id mOBEXFilePut;
    BluetoothFileReference *mFolderListingFileRef;
    int mActionCommand;
    int mSavedCommand;
    NSString *mActionArgument1;
    NSString *mActionArgument2;
    NSString *mActionArgument3;
    NSString *mCurrentRemoteDirectory;
    BOOL mActionInProgress;
    BOOL mWeOpenedTheOBEXConnection;
    BOOL mHasTargetHeader;
    id mDelegate;
    BOOL mAbortedByOwner;
    BOOL mWeAreAborting;
    NSTimer *mInactivityTimer;
    IOBluetoothOBEXSession *mOBEXSession;
    unsigned short mMaxPacketLength;
    int mConnectionID;
    id mPUTProgress;
    id mGETProgress;
    void *mReserved1;
    void *mReserved2;
}

@property id delegate;

+ (id)withOBEXSession:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (int)removeItem:(id)a0;
- (int)disconnect;
- (int)connect;
- (BOOL)isConnected;
- (BOOL)isBusy;
- (id)currentPath;
- (int)abort;
- (void)SessionResponseCallback:(id)a0;
- (void)inactivityTimerFired:(id)a0;
- (id)initWithOBEXSession:(id)a0;
- (int)connectToFTPService;
- (int)connectToObjectPushService;
- (int)configureForAction:(unsigned int)a0 arg1:(id)a1 arg2:(id)a2 arg3:(id)a3;
- (int)changeCurrentFolderForwardToPath:(id)a0;
- (int)changeCurrentFolderToRoot;
- (int)changeCurrentFolderBackward;
- (int)createFolder:(id)a0;
- (int)retrieveFolderListing;
- (int)sendFile:(id)a0;
- (int)sendData:(id)a0 type:(id)a1 name:(id)a2;
- (int)copyRemoteFile:(id)a0 toLocalPath:(id)a1;
- (int)getDefaultVCard:(id)a0;
- (void)PutFileHandler:(id)a0 isEnd:(BOOL)a1 errorCode:(int)a2 transferProgress:(id)a3;
- (void)GetFileHandler:(id)a0 isEnd:(BOOL)a1 errorCode:(int)a2 transferProgress:(id)a3;
- (void)finalizeActionAsync:(id)a0;
- (void)setOBEXSession:(id)a0;
- (id)OBEXSession;
- (void)setActionInProgress:(BOOL)a0;
- (void)setActionArgument1:(id)a0;
- (void)setActionArgument2:(id)a0;
- (void)setActionArgument3:(id)a0;
- (void)initForNewAction;
- (void)initiateAction;
- (void)startCommand;
- (int)sendSetPathCommandWithDict:(struct __CFDictionary { } *)a0 andFlags:(unsigned char)a1;
- (int)sendGetListingCommandWithDict:(struct __CFDictionary { } *)a0;
- (int)sendRemoveCommandWithDict:(struct __CFDictionary { } *)a0;
- (void)OBEXConnectHandler:(struct OBEXConnectCommandResponseData { unsigned char x0; void *x1; unsigned long long x2; unsigned short x3; unsigned char x4; unsigned char x5; } *)a0;
- (void)OBEXAbortHandler:(struct OBEXAbortCommandResponseData { unsigned char x0; void *x1; unsigned long long x2; } *)a0;
- (void)OBEXDisconnectHandler:(struct OBEXDisconnectCommandResponseData { unsigned char x0; void *x1; unsigned long long x2; } *)a0;
- (void)OBEXSetPathHandler:(struct OBEXSetPathCommandResponseData { unsigned char x0; void *x1; unsigned long long x2; unsigned char x3; unsigned char x4; } *)a0;
- (void)OBEXGetFolderListingHandler:(struct OBEXGetCommandResponseData { unsigned char x0; void *x1; unsigned long long x2; } *)a0;
- (void)OBEXRemoveItemHandler:(struct OBEXGetCommandResponseData { unsigned char x0; void *x1; unsigned long long x2; } *)a0;
- (void)finalizeActionWithError:(int)a0 itemName:(id)a1;
- (void)notifyDelegateOfProgress:(int)a0 itemName:(id)a1;

@end
