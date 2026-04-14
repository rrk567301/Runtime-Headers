@class BRCAccountSession, NSMutableDictionary, NSOperationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface BRCItemTransmogrifier : NSObject {
    BRCAccountSession *_session;
    NSObject<OS_dispatch_source> *_pendingRenamesTimer;
    NSMutableArray *_pendingRenames;
    NSOperationQueue *_queue;
    NSMutableDictionary *_pendingTransmogirifcations;
}

- (void).cxx_destruct;
- (id)queue;
- (id)initWithSession:(id)a0;
- (void)scheduleBouncedDirectoryRename:(id)a0;
- (void)_finishDirectoryToPackageTransmogrification:(id)a0 relpath:(id)a1;
- (double)_renameDelayForZone:(id)a0;
- (double)_renameItem:(id)a0;
- (void)_renameItems;
- (void)_scheduleRenameAfter:(double)a0 onQueue:(id)a1;
- (BOOL)addOperation:(id)a0 forItem:(id)a1;
- (void)removeOperationsForItemGlobalID:(id)a0;
- (void)scheduleDirectoryToPackageTransmogrification:(id)a0 absolutePath:(id)a1;

@end
