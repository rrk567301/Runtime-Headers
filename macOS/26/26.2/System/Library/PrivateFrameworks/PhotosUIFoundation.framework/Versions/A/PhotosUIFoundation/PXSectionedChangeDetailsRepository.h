@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PXSectionedChangeDetailsRepository : NSObject {
    NSMutableArray *_allChangeDetails;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly, nonatomic) long long historyLimit;

- (void).cxx_destruct;
- (id)init;
- (id)changeDetailsFromDataSourceIdentifier:(long long)a0 toDataSourceIdentifier:(long long)a1;
- (id)coalescedChangeDetailsFromDataSourceIdentifier:(long long)a0 toDataSourceIdentifier:(long long)a1;
- (void)addChangeDetails:(id)a0;
- (id)indexPathSetAfterApplyingChangeDetailsToDataSourceIdentifier:(long long)a0 indexPathSetBeforeChanges:(id)a1 hasIncrementalChanges:(out BOOL *)a2;
- (id)initWithChangeHistoryLimit:(long long)a0;

@end
