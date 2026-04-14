@class CKServerChangeToken, NSData;

@interface WBBookmarkDatabaseSyncData : NSObject <NSSecureCoding> {
    long long _lastChangeID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CKServerChangeToken *lastServerChangeToken;
@property (nonatomic) BOOL didNotSaveRecordsAfterMigration;
@property (readonly, copy, nonatomic) NSData *encodedDatabaseSyncData;
@property (readonly, nonatomic) long long nextChangeID;

+ (id)databaseSyncDataWithContentsOfData:(id)a0;
+ (id)databaseSyncDataInDatabase:(void *)a0 databaseAccessor:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)writeToDatabase:(void *)a0 databaseAccessor:(id)a1;

@end
