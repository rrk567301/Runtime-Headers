@class NSNumber, CKRecordZoneID, NSData;

@interface CKDAssetZoneKey : NSObject <NSCopying>

@property (readonly, nonatomic) long long destinationDatabaseScope;
@property (readonly, nonatomic) CKRecordZoneID *destinationZoneID;
@property (readonly, nonatomic) CKRecordZoneID *sourceZoneID;
@property (readonly, nonatomic) long long sourceDatabaseScope;
@property (readonly, nonatomic) NSNumber *useMMCSEncryptionV2;
@property (readonly, nonatomic) char isReReference;
@property (readonly, nonatomic) char isCrossOwner;
@property (retain, nonatomic) NSData *cloneContext;
@property (readonly, nonatomic) char isPackageRereference;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (int)authPutType;
- (id)initWithDestinationZoneID:(id)a0 destinationDatabaseScope:(long long)a1 usesMMCSEncryptionV2:(id)a2;
- (id)initWithDestinationZoneID:(id)a0 destinationDatabaseScope:(long long)a1 usesMMCSEncryptionV2:(id)a2 sourceZoneID:(id)a3 sourceDatabaseScope:(long long)a4 isPackageRereference:(char)a5;

@end
