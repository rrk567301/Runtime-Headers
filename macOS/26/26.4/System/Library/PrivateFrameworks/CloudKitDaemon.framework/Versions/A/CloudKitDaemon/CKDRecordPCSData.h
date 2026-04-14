@class NSData, NSString, CKRecordID, CKDZonePCSData, CKDChainPCSData, CKEncryptedData, CKPCSKeysToRemove, CKRecordZoneID, CKDSharePCSData;

@interface CKDRecordPCSData : CKDPCSData <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSString *recordType;
@property (retain, nonatomic) CKRecordID *parentID;
@property (retain, nonatomic) CKDRecordPCSData *parentPCSData;
@property (retain, nonatomic) NSData *chainParentPublicKeyID;
@property (retain, nonatomic) CKDZonePCSData *zonePCSData;
@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) NSData *zoneishPublicKeyID;
@property (retain, nonatomic) CKDSharePCSData *sharePCSData;
@property (retain, nonatomic) CKRecordID *shareID;
@property (nonatomic) struct _OpaquePCSShareProtection { } *signingPCS;
@property (retain, nonatomic) CKDChainPCSData *chainPCSData;
@property (retain, nonatomic) CKEncryptedData *encryptedPublicSharingKey;
@property (copy, nonatomic) CKPCSKeysToRemove *pcsKeysToRemove;

+ (id)dataWithRecord:(id)a0;

- (id)initWithRecord:(id)a0;
- (BOOL)shouldEncodePCSData;
- (id)initWithPCSData:(id)a0 recordID:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)itemID;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)setPcs:(struct _OpaquePCSShareProtection { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
