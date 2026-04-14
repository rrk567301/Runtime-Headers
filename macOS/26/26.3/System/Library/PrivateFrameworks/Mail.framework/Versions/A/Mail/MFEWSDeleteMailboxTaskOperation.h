@class NSString;

@interface MFEWSDeleteMailboxTaskOperation : MFEWSPersistenceTaskOperation

@property (nonatomic) BOOL didDelete;
@property (readonly, copy, nonatomic) NSString *folderIDString;

- (id)init;
- (void)main;
- (void).cxx_destruct;
- (id)initWithFolderIDString:(id)a0;

@end
