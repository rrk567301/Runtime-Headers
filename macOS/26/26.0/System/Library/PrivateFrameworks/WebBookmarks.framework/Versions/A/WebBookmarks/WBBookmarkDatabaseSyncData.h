@class CKServerChangeToken, NSDictionary, NSData, NSSet, NSMutableDictionary;

@interface WBBookmarkDatabaseSyncData : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_recordZoneIDsToLastServerChangeTokens;
    long long _lastChangeID;
    NSMutableDictionary *_recordZoneIDsToHashGenerators;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CKServerChangeToken *lastPrivateDatabaseServerChangeToken;
@property (copy, nonatomic) CKServerChangeToken *lastSharedDatabaseServerChangeToken;
@property (readonly, copy, nonatomic) NSDictionary *recordZoneIDsToLastServerChangeTokens;
@property (nonatomic) BOOL didNotSaveRecordsAfterMigration;
@property (readonly, copy, nonatomic) NSData *encodedDatabaseSyncData;
@property (readonly, nonatomic) long long nextChangeID;
@property (nonatomic) long long minimumSyncAPIVersion;
@property (copy, nonatomic) NSSet *recordIDsToRefresh;
@property (copy, nonatomic) NSSet *auxiliaryRecordIDsToDelete;
@property (readonly, copy, nonatomic) NSDictionary *recordZoneIDsToHashGenerators;
@property (copy, nonatomic) NSSet *idsOfRecordZonesToRefresh;

+ (id)databaseSyncDataWithContentsOfData:(id)a0;
+ (id)databaseSyncDataInDatabase:(void *)a0 databaseAccessor:(id)a1;

- (id)hashGeneratorForRecordZoneID:(id)a0;
- (void)writeToDatabase:(void *)a0 databaseAccessor:(id)a1;
- (void)setHashGenerator:(id)a0 forRecordZoneID:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)lastServerChangeTokenForRecordZoneID:(id)a0;
- (void)clearAllLastServerChangeTokens;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)setLastServerChangeToken:(id)a0 forRecordZoneID:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
