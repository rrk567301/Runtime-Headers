@class CKSQLite, CKDContainer, NSDate, NSNumber;

@interface CKDRecordCache : NSObject

@property (retain, nonatomic) CKSQLite *db;
@property (weak, nonatomic) CKDContainer *container;
@property (nonatomic) long long scope;
@property (retain, nonatomic) NSDate *lastExpiryAttempt;
@property (retain, nonatomic) NSNumber *explicitCacheSizeLimit;

+ (id)_expiryDateFormatter;

- (void).cxx_destruct;
- (id)_dsid;
- (unsigned long long)recordCacheSizeLimit;
- (void)releaseDatabase;
- (BOOL)_cachedRecordKnownUserKeyData:(id)a0 satisfiesRequiredKeys:(id)a1;
- (id)_recordWithID:(id)a0 requiredKeys:(id)a1;
- (BOOL)_cachedRecordHasValidAssets:(id)a0 forRequiredKeys:(id)a1;
- (id)_trimRecord:(id)a0 toRequiredKeys:(id)a1;
- (unsigned long long)_lockedSizeOfAllRecordsInDb;
- (void)_attemptRecordExpiryIfNeeded;
- (id)recordsWithIDs:(id)a0 requiredKeys:(id)a1;
- (void)clearAssetAuthTokensForRecord:(id)a0;
- (void)addRecord:(id)a0 knownUserKeys:(id)a1;
- (void)scheduleRecordExpirationWithExpiryDate:(id)a0;
- (id)initWithDatabase:(id)a0 container:(id)a1 scope:(long long)a2;
- (void)replaceDatabase:(id)a0;
- (id)recordWithID:(id)a0 requiredKeys:(id)a1;
- (unsigned long long)numberOfRecordsWithID:(id)a0;
- (id)etagForRecordID:(id)a0 requiredKeys:(id)a1;
- (void)deleteRecordWithID:(id)a0;
- (void)clearAllRecordsInScope;
- (void)clearAllRecords;
- (void)clearAllRecordsForZoneWithID:(id)a0;
- (void)clearAssetAuthTokensForRecordWithID:(id)a0;

@end
