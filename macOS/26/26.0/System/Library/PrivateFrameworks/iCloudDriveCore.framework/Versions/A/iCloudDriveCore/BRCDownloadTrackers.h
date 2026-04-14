@class BRCAccountSession, NSString, NSMutableDictionary, NSMapTable;

@interface BRCDownloadTrackers : NSObject <BRCDownloadTrackerManaging> {
    NSMutableDictionary *_trackersByFileObjectID;
    NSMapTable *_fileObjectIDsByTracker;
}

@property (readonly, weak, nonatomic) BRCAccountSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSession:(id)a0;
- (void)addDownloadTracker:(id)a0 forFileObjectID:(id)a1 withEtagIfLoser:(id)a2;
- (void)removeDownloadTracker:(id)a0;
- (void)document:(id)a0 didCompleteDownloadEtagIfLoser:(id)a1 kind:(int)a2 withError:(id)a3;
- (id)trackedFileObjectIDs;
- (void).cxx_destruct;

@end
