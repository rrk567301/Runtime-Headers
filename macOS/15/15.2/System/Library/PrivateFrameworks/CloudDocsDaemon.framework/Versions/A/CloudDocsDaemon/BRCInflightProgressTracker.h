@class br_pacer, NSString, BRCAccountSession, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_workloop;

@interface BRCInflightProgressTracker : NSObject <BRCModule> {
    BRCAccountSession *_session;
    NSMutableDictionary *_downloadProgressesByParentFileID;
    NSMutableDictionary *_uploadProgressesByParentFileID;
    NSMutableSet *_parentFileIDsBeingHeldUntilNextFlush;
    NSMutableSet *_parentFileIDsWithChildrenUpdates;
    NSObject<OS_dispatch_workloop> *_workloop;
    br_pacer *_pacer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isCancelled;

- (void).cxx_destruct;
- (void)close;
- (void)resume;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)databaseAndNotificationDidFlush;
- (id)_progressUpdateForFileID:(id)a0;
- (id)_progressesByParentFileIDsInGroup:(char)a0;
- (void)_sendNotificationsForChildrenUpdates;
- (void)_trackProgress:(id)a0 forParentFoldersInGroup:(char)a1;
- (unsigned long long)_transferedSizeForDirectoryWithFileID:(id)a0 getTotalSize:(unsigned long long *)a1 getParentFileIDs:(id *)a2 inGroup:(char)a3;
- (void)_untrackProgress:(id)a0 forParentFoldersInGroup:(char)a1;
- (id)initWithAccountSession:(id)a0;
- (id)progressUpdateForFileObjectID:(id)a0;
- (void)trackProgress:(id)a0 forParentFoldersInGroup:(char)a1;
- (void)untrackProgress:(id)a0 forParentFoldersInGroup:(char)a1;

@end
