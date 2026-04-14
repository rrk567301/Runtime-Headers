@class BRCAccountSession, NSMutableDictionary, NSMapTable;

@interface BRCDownloadTrackers : NSObject {
    NSMutableDictionary *_trackersByFileObjectID;
    NSMapTable *_fileObjectIDsByTracker;
}

@property (readonly, weak, nonatomic) BRCAccountSession *session;

- (void).cxx_destruct;
- (id)initWithSession:(id)a0;
- (id)trackedFileObjectIDs;
- (void)addDownloadTracker:(id)a0 forFileObjectID:(id)a1;
- (void)removeDownloadTracker:(id)a0;
- (void)document:(id)a0 didCompleteDownloadWithError:(id)a1;
- (BOOL)hasPendingTrackerForFileObjectID:(id)a0;
- (unsigned long long)spaceRequiredForTrackers;

@end
