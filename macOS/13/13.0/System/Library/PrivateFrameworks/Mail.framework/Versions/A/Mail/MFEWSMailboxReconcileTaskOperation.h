@class NSString;
@protocol MFEWSMailboxReconcileTaskOperationDelegate;

@interface MFEWSMailboxReconcileTaskOperation : MFEWSNetworkTaskOperation

@property (readonly, copy, nonatomic) NSString *folderIDString;
@property (copy, nonatomic) NSString *currentSyncState;
@property (weak, nonatomic) id<MFEWSMailboxReconcileTaskOperationDelegate> delegate;

+ (id)_newRequestWithFolderID:(id)a0 syncState:(id)a1;
+ (long long)_maxChangesReturned;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)initWithFolderIDString:(id)a0 initialSyncState:(id)a1;
- (Class)_supportedClassForItem:(id)a0;

@end
