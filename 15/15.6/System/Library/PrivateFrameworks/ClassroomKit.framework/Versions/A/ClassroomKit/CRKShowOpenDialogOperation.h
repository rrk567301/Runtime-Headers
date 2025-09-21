@class NSSet, NSString, NSData, NSURL;
@protocol CRKSharingPrimitives, CRKFileSystemPrimitives, CRKSharingAirDropTransfer;

@interface CRKShowOpenDialogOperation : CATOperation {
    NSSet *mURLs;
    char mKeepOriginalFiles;
    NSData *mPreviewImageData;
    NSString *mSenderName;
    char mAutoAccept;
    NSString *mSourceBundleIdentifier;
    NSString *mFilesDescription;
    char mTransferAccepted;
    char mTransferFinished;
    NSURL *mTransferDirectoryURL;
}

@property (readonly, nonatomic) double cleanupDelay;
@property (readonly, nonatomic) id<CRKSharingPrimitives> sharingPrimitives;
@property (readonly, nonatomic) id<CRKFileSystemPrimitives> fileSystemPrimitives;
@property (retain, nonatomic) id<CRKSharingAirDropTransfer> transfer;

+ (id)fakeBundleID;

- (void).cxx_destruct;
- (void)failWithError:(id)a0;
- (void)cancel;
- (char)isAsynchronous;
- (void)main;
- (void)transferWithIdentifierWasAccepted:(id)a0;
- (void)succeedIfNeeded;
- (void)cleanupHiddenTransferItemsIfNeeded;
- (id)initWithFileURLs:(id)a0 keepOriginalFiles:(char)a1 previewImageData:(id)a2 senderName:(id)a3 autoAccept:(char)a4;
- (id)initWithFileURLs:(id)a0 keepOriginalFiles:(char)a1 previewImageData:(id)a2 senderName:(id)a3 autoAccept:(char)a4 sourceBundleIdentifier:(id)a5;
- (id)initWithFileURLs:(id)a0 keepOriginalFiles:(char)a1 previewImageData:(id)a2 senderName:(id)a3 autoAccept:(char)a4 sourceBundleIdentifier:(id)a5 filesDescription:(id)a6;
- (id)initWithFileURLs:(id)a0 keepOriginalFiles:(char)a1 previewImageData:(id)a2 senderName:(id)a3 autoAccept:(char)a4 sourceBundleIdentifier:(id)a5 filesDescription:(id)a6 cleanupDelay:(double)a7 sharingPrimitives:(id)a8 fileSystemPrimitives:(id)a9;
- (void)startTransfer;
- (void)transferDidFinishWithSuccess:(char)a0 destinationPath:(id)a1 error:(id)a2;
- (void)transferDidProgressWithSuccess:(char)a0 destinationPath:(id)a1 error:(id)a2;
- (void)transferDidStartWithSuccess:(char)a0 destinationPath:(id)a1 error:(id)a2;
- (void)transferWithIdentifierWasDeclined:(id)a0 error:(id)a1;

@end
