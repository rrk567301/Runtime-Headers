@class NSString, CKRecordID;

@interface PKCloudDeletedRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSString *recordName;
@property (readonly, nonatomic) BOOL isPass;
@property (readonly, nonatomic) BOOL isPassCatalog;
@property (readonly, nonatomic) BOOL isRemoteAsset;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithRecordID:(id)a0 recordType:(id)a1;
- (BOOL)isEqualToDeletedRecord:(id)a0;

@end
