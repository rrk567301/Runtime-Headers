@class NSString, NSMutableArray, HDCloudSyncCodableProfileIdentifier;

@interface HDCloudSyncCodableRegistry : PBCodable <NSCopying> {
    struct { unsigned char displayNameModificationDate : 1; unsigned char deleted : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *disabledOwnerIdentifiers;
@property (retain, nonatomic) NSMutableArray *stores;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL deleted;
@property (readonly, nonatomic) BOOL hasDisplayFirstName;
@property (retain, nonatomic) NSString *displayFirstName;
@property (nonatomic) BOOL hasDisplayNameModificationDate;
@property (nonatomic) double displayNameModificationDate;
@property (readonly, nonatomic) BOOL hasDisplayLastName;
@property (retain, nonatomic) NSString *displayLastName;
@property (readonly, nonatomic) BOOL hasOwnerProfileIdentifier;
@property (retain, nonatomic) HDCloudSyncCodableProfileIdentifier *ownerProfileIdentifier;
@property (readonly, nonatomic) BOOL hasSharedProfileIdentifier;
@property (retain, nonatomic) HDCloudSyncCodableProfileIdentifier *sharedProfileIdentifier;

+ (Class)disabledOwnerIdentifiersType;
+ (Class)storesType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearDisabledOwnerIdentifiers;
- (void)addDisabledOwnerIdentifiers:(id)a0;
- (unsigned long long)disabledOwnerIdentifiersCount;
- (id)disabledOwnerIdentifiersAtIndex:(unsigned long long)a0;
- (void)clearStores;
- (void)addStores:(id)a0;
- (unsigned long long)storesCount;
- (id)storesAtIndex:(unsigned long long)a0;

@end
