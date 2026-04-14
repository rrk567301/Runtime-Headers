@class CKVInstanceInfoLog, CKVSkitUpdater, CKVItemRecordUpdater, CKVFTSRecordUpdater, CKVDiffUpdateCache;

@interface CKVIndexUpdater : NSObject {
    CKVInstanceInfoLog *_instanceLog;
    CKVItemRecordUpdater *_itemUpdater;
    CKVFTSRecordUpdater *_ftsUpdater;
    CKVSkitUpdater *_skitUpdater;
    id /* block */ _completion;
    unsigned int _storedItemCount;
    unsigned int _addOrUpdateCount;
    unsigned int _removeCount;
    unsigned short _options;
    unsigned long long _rankCounter;
    long long _itemType;
    CKVDiffUpdateCache *_diffUpdateCache;
}

@property (nonatomic) BOOL updateStatus;
@property (readonly, nonatomic) unsigned short updaterOptions;
@property (readonly, nonatomic) unsigned short incrementalErrorCode;

+ (id)updaterForRequest:(id)a0 indexManager:(id)a1 settings:(id)a2 timeout:(double)a3;
+ (BOOL)_rebuildSkitWithAllVocabularyForUser:(id)a0 indexManager:(id)a1 settings:(id)a2;

- (void).cxx_destruct;
- (BOOL)finish;
- (void)_deleteAllItems;
- (void)_complete;
- (void)abort;
- (BOOL)isIncremental;
- (BOOL)isRanked;
- (id)modifiedFieldTypes;
- (unsigned long long)priorVersion;
- (id)initWithRequest:(id)a0 settings:(id)a1 instanceLog:(id)a2 database:(id)a3 skit:(id)a4 completion:(id /* block */)a5;
- (BOOL)isPriorDatasetRanked;
- (id)initWithRequest:(id)a0 updaterOptions:(unsigned short)a1 errorCode:(unsigned short)a2 instanceLog:(id)a3 itemUpdater:(id)a4 ftsUpdater:(id)a5 skitUpdater:(id)a6 options:(unsigned short)a7 completion:(id /* block */)a8;
- (BOOL)addOrUpdateItems:(id)a0;
- (BOOL)removeItemId:(id)a0;
- (unsigned long long)_incrementRank;
- (void)_diffUpdateItems:(id)a0;
- (void)_deleteStaleItems;
- (void)_insertAllItems:(id)a0;
- (void)_logSkitUpdate;

@end
