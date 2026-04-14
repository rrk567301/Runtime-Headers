@class NSProgress, ECLocalMessageAction;
@protocol MFEWSMessageActionSyncOperationDelegate;

@interface MFEWSMessageActionSyncOperation : MFEWSNetworkTaskOperation

@property (readonly, nonatomic) ECLocalMessageAction *messageAction;
@property (retain, nonatomic) NSProgress *progress;
@property (weak, nonatomic) id<MFEWSMessageActionSyncOperationDelegate> delegate;

- (id)init;
- (BOOL)isRecoverableError:(id)a0;
- (void).cxx_destruct;
- (id)folderIDStringForMailbox:(id)a0;
- (id)folderIDStringForMailboxURLString:(id)a0;
- (id)initWithMessageAction:(id)a0;

@end
