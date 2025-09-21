@class CKServerChangeToken, NSDictionary, NSData, NSSet, NSMutableDictionary;

@interface WBBookmarkDatabaseSyncData : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_recordZoneIDsToLastServerChangeTokens;
    long long _lastChangeID;
    NSMutableDictionary *_recordZoneIDsToHashGenerators;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) CKServerChangeToken *lastPrivateDatabaseServerChangeToken;
@property (copy, nonatomic) CKServerChangeToken *lastSharedDatabaseServerChangeToken;
@property (readonly, copy, nonatomic) NSDictionary *recordZoneIDsToLastServerChangeTokens;
@property (nonatomic) char didNotSaveRecordsAfterMigration;
@property (readonly, copy, nonatomic) NSData *encodedDatabaseSyncData;
@property (readonly, nonatomic) long long nextChangeID;
@property (nonatomic) long long minimumSyncAPIVersion;
@property (copy, nonatomic) NSSet *recordIDsToRefresh;
@property (copy, nonatomic) NSSet *auxiliaryRecordIDsToDelete;
@property (readonly, copy, nonatomic) NSDictionary *recordZoneIDsToHashGenerators;
@property (copy, nonatomic) NSSet *idsOfRecordZonesToRefresh;

+ (id)databaseSyncDataInDatabase:(void *)a0 databaseAccessor:(id)a1;
+ (id)databaseSyncDataWithContentsOfData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)clearAllLastServerChangeTokens;
- (id)hashGeneratorForRecordZoneID:(id)a0;
- (id)lastServerChangeTokenForRecordZoneID:(id)a0;
- (void)setHashGenerator:(id)a0 forRecordZoneID:(id)a1;
- (void)setLastServerChangeToken:(id)a0 forRecordZoneID:(id)a1;
- (void)writeToDatabase:(void *)a0 databaseAccessor:(id)a1;

@end
