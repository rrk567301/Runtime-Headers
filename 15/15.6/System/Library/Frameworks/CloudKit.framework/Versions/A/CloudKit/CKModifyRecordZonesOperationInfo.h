@class NSArray;

@interface CKModifyRecordZonesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *recordZonesToSave;
@property (retain, nonatomic) NSArray *recordZoneIDsToDelete;
@property (nonatomic) char allowDefaultZoneSave;
@property (nonatomic) char markZonesAsUserPurged;
@property (nonatomic) long long maxZoneSaveAttempts;
@property (nonatomic) char dontFetchFromServer;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
