@class NSString, NSMutableArray, HDCloudSyncCodableProfileIdentifier;

@interface HDCloudSyncCodableRegistry : PBCodable <NSCopying> {
    struct { unsigned char displayNameModificationDate : 1; unsigned char deleted : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *disabledOwnerIdentifiers;
@property (retain, nonatomic) NSMutableArray *stores;
@property (retain, nonatomic) NSMutableArray *disabledSyncIdentities;
@property (nonatomic) char hasDeleted;
@property (nonatomic) char deleted;
@property (readonly, nonatomic) char hasDisplayFirstName;
@property (retain, nonatomic) NSString *displayFirstName;
@property (nonatomic) char hasDisplayNameModificationDate;
@property (nonatomic) double displayNameModificationDate;
@property (readonly, nonatomic) char hasDisplayLastName;
@property (retain, nonatomic) NSString *displayLastName;
@property (readonly, nonatomic) char hasOwnerProfileIdentifier;
@property (retain, nonatomic) HDCloudSyncCodableProfileIdentifier *ownerProfileIdentifier;
@property (readonly, nonatomic) char hasSharedProfileIdentifier;
@property (retain, nonatomic) HDCloudSyncCodableProfileIdentifier *sharedProfileIdentifier;

+ (Class)disabledOwnerIdentifiersType;
+ (Class)disabledSyncIdentitiesType;
+ (Class)storesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addDisabledOwnerIdentifiers:(id)a0;
- (void)addDisabledSyncIdentities:(id)a0;
- (void)addStores:(id)a0;
- (void)clearDisabledOwnerIdentifiers;
- (void)clearDisabledSyncIdentities;
- (void)clearStores;
- (id)disabledOwnerIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)disabledOwnerIdentifiersCount;
- (id)disabledSyncIdentitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)disabledSyncIdentitiesCount;
- (id)storesAtIndex:(unsigned long long)a0;
- (unsigned long long)storesCount;

@end
