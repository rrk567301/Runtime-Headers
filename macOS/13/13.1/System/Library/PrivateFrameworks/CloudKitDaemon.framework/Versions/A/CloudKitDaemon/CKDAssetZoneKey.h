@class CKRecordZoneID;

@interface CKDAssetZoneKey : NSObject <NSCopying>

@property (retain, nonatomic) CKRecordZoneID *destinationZoneID;
@property (nonatomic) long long destinationDatabaseScope;
@property (retain, nonatomic) CKRecordZoneID *sourceZoneID;
@property (nonatomic) long long sourceDatabaseScope;
@property (readonly, nonatomic) BOOL isCrossOwner;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)initWithDestinationZoneID:(id)a0 destinationDatabaseScope:(long long)a1;
- (id)initWithDestinationZoneID:(id)a0 destinationDatabaseScope:(long long)a1 sourceZoneID:(id)a2 sourceDatabaseScope:(long long)a3;

@end
