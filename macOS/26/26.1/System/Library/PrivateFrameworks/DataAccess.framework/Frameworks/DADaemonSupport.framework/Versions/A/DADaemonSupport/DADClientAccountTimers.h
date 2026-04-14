@class NSObject, NSMutableDictionary, NSDate;
@protocol OS_dispatch_source;

@interface DADClientAccountTimers : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDate *_lastAllFolderContentsRequestDate;
    NSDate *_lastFolderListRequestDate;
    NSDate *_lastFolderWipeRequestDate;
}

@property (retain, nonatomic) NSMutableDictionary *folderIdToLastFolderContentsRequestDate;
@property (retain, nonatomic) NSDate *lastAllFolderContentsRequestDate;
@property (retain, nonatomic) NSDate *lastFolderListRequestDate;
@property (retain, nonatomic) NSDate *lastFolderWipeRequestDate;
@property (weak, nonatomic) NSObject<OS_dispatch_source> *deferredAllFolderContentsSource;
@property (weak, nonatomic) NSObject<OS_dispatch_source> *deferredFolderListSource;
@property (weak, nonatomic) NSObject<OS_dispatch_source> *deferredFolderContentsSource;

- (long long)clientBehaviorForFolderContents;
- (BOOL)allowFolderWipe;
- (long long)clientBehaviorForFolderIds:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (double)deferredTimerInterval;
- (void)setLastFolderContentRequestDate:(id)a0 forFolderWithId:(id)a1;
- (long long)clientBehaviorForFolderList;
- (id)init;
- (void)killAllTimers;

@end
