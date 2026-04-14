@class NSArray, FPItem, NSOperationQueue, NSObject, FPItemID;
@protocol OS_dispatch_queue;

@interface FPArchiveOperation : FPActionOperation {
    NSArray *_items;
    FPItemID *_placeholderID;
    FPItem *_destinationFolder;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
}

@property (copy, nonatomic) id /* block */ archiveCompletionBlock;

- (void).cxx_destruct;
- (id)initWithItems:(id)a0 destinationFolder:(id)a1;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)_coordinateArchivedItemsWithCompletionHandler:(id /* block */)a0;
- (void)_copyArchivedItemsWithCompletionHandler:(id /* block */)a0;
- (void)_prepareItemsWithCompletionHandler:(id /* block */)a0;
- (void)_archiveURLs:(id)a0 completionHandler:(id /* block */)a1;
- (id)findUniqueArchivedName:(id)a0 isFolder:(BOOL)a1 parent:(id)a2;
- (void)actionMain;
- (id)_zipPathExtension;
- (void)presendNotifications;
- (void)didUnarchiveItemAtURL:(id)a0;

@end
