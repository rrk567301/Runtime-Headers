@class NSString;
@protocol MFEWSSyncFolderHierarchyTaskOperationDelegate;

@interface MFEWSSyncFolderHierarchyTaskOperation : MFEWSNetworkTaskOperation

@property (copy) NSString *currentSyncState;
@property (weak, nonatomic) id<MFEWSSyncFolderHierarchyTaskOperationDelegate> delegate;

+ (id)_newRequestWithSyncState:(id)a0;

- (void)main;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_folderIsHidden:(id)a0;
- (id)initWithInitialSyncState:(id)a0;

@end
