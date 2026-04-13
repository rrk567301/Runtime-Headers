@class NSMutableArray;

@interface SHKSaveToFilesSharingService : SHKSharingService

@property (retain) NSMutableArray *urlsToDelete;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (void)performWithItems:(id)a0;
- (BOOL)canPerformWithItems:(id)a0;
- (void)save:(id)a0;
- (void)canPerformWithItems:(id)a0 completion:(id /* block */)a1;
- (id)temporaryFileURLForData:(id)a0 typeIdentifier:(id)a1;
- (id)loadFileURLForPDFItemProvider:(id)a0;
- (void)deleteTemporaryURLs;
- (id)loadFileURLForPDFItem:(id)a0;
- (id)loadFileURLSyncForItemProvider:(id)a0;
- (id)fileURLForItems:(id)a0;
- (void)saveFileURL:(id)a0;

@end
