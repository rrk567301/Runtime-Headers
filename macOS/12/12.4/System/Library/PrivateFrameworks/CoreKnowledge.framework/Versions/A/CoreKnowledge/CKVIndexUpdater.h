@class CKVDonateRequest, CKVSkitUpdater, CKVIndexMaintenanceLog, CKVItemRecordUpdater, CKVFTSRecordUpdater;

@interface CKVIndexUpdater : NSObject {
    CKVIndexMaintenanceLog *_maintenanceLog;
    CKVItemRecordUpdater *_itemUpdater;
    CKVFTSRecordUpdater *_ftsUpdater;
    CKVSkitUpdater *_skitUpdater;
    id /* block */ _completion;
    unsigned long long _streamedItemCount;
    unsigned long long _storedItemCount;
    unsigned long long _options;
    CKVDonateRequest *_request;
}

@property (nonatomic) BOOL updateStatus;

+ (id)updaterForRequest:(id)a0 indexManager:(id)a1 settings:(id)a2 timeout:(double)a3;
+ (BOOL)rebuildSkitWithAllVocabulary:(id)a0 settings:(id)a1;

- (void).cxx_destruct;
- (BOOL)finish;
- (void)_deleteAllItems;
- (void)_complete;
- (void)abort;
- (id)initWithRequest:(id)a0 settings:(id)a1 maintenanceLog:(id)a2 database:(id)a3 skit:(id)a4 completion:(id /* block */)a5;
- (id)initWithRequest:(id)a0 maintenanceLog:(id)a1 itemUpdater:(id)a2 ftsUpdater:(id)a3 skitUpdater:(id)a4 completion:(id /* block */)a5;
- (void)_diffUpdateItems:(id)a0;
- (void)_insertAllItems:(id)a0;
- (void)_deleteStaleItems;
- (void)_logSkitUpdate;
- (BOOL)addOrUpdateItems:(id)a0;

@end
