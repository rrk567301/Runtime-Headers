@class CKUploadRequestConfiguration, CKRecordID, NSString;

@interface CKMarkAssetBrokenOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSString *field;
@property (nonatomic) long long listIndex;
@property (nonatomic) char touchRepairZone;
@property (nonatomic) char bypassPCSEncryptionForTouchRepairZone;
@property (nonatomic) char simulateCorruptAsset;
@property (nonatomic) char writeRepairRecord;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
