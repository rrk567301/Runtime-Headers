@class NSString;

@interface MFEWSDeleteMailboxTaskOperation : MFEWSPersistenceTaskOperation

@property (nonatomic) BOOL didDelete;
@property (readonly, copy, nonatomic) NSString *folderIDString;

- (void)main;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFolderIDString:(id)a0;

@end
