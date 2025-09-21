@class NSString, CKRecordID;

@interface PKCloudDeletedRecord : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSString *recordName;
@property (readonly, nonatomic) char isPass;
@property (readonly, nonatomic) char isPassCatalog;
@property (readonly, nonatomic) char isRemoteAsset;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRecordID:(id)a0 recordType:(id)a1;
- (char)isEqualToDeletedRecord:(id)a0;

@end
