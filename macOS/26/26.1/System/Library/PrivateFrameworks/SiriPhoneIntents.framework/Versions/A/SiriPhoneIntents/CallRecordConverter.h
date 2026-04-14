@class NSCache;

@interface CallRecordConverter : NSObject

@property (retain, nonatomic) NSCache *recentCallIdToCallRecordCache;
@property (retain, nonatomic) NSCache *handleToPersonCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (long long)callCapabilityFromRecentCall:(id)a0;
- (id)callRecordForRecentCall:(id)a0 withContactsDataSource:(id)a1 withCallProviderManager:(id)a2 withCurrentISOCountryCodes:(id)a3;
- (id)callRecordsForRecentCalls:(id)a0 withContactsDataSource:(id)a1 withCallProviderManager:(id)a2;
- (id)callRecordsForRecentCalls:(id)a0 withContactsDataSource:(id)a1 withCallProviderManager:(id)a2 withCurrentISOCountryCodes:(id)a3;
- (long long)preferredCallProviderFromRecentCall:(id)a0;

@end
