@class FPOneToManyWeakMap, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface FPProgressManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_downloadProgressPerItemIDs;
    NSMapTable *_uploadProgressPerItemIDs;
    FPOneToManyWeakMap *_copyProgressPerItemIDs;
}

+ (id)defaultManager;

- (id)init;
- (void).cxx_destruct;
- (void)attachProgressToItemsIfNeeded:(id)a0;
- (void)registerCopyProgress:(id)a0 forItemID:(id)a1;
- (void)removeCopyProgressForItemID:(id)a0;
- (void)removeDownloadProgressForItemID:(id)a0;
- (id)removeCopyProgress:(id)a0;
- (id)copyProgressForItem:(id)a0;
- (id)downloadProgressForItem:(id)a0;
- (id)uploadProgressForItem:(id)a0;
- (void)_resolveURLForItem:(id)a0 trustURLIfAvailable:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)_progressForItem:(id)a0 usingProgressMap:(id)a1;

@end
