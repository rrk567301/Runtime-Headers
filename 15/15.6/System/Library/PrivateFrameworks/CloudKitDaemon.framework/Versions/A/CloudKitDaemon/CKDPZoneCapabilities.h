@interface CKDPZoneCapabilities : PBCodable <NSCopying> {
    struct { unsigned char sharingType : 1; unsigned char atomicSaves : 1; unsigned char ckql : 1; unsigned char fetchChanges : 1; unsigned char hierarchicalSharing : 1; unsigned char zoneSharing : 1; } _has;
}

@property (nonatomic) char hasAtomicSaves;
@property (nonatomic) char atomicSaves;
@property (nonatomic) char hasFetchChanges;
@property (nonatomic) char fetchChanges;
@property (nonatomic) char hasCkql;
@property (nonatomic) char ckql;
@property (nonatomic) char hasSharingType;
@property (nonatomic) int sharingType;
@property (nonatomic) char hasZoneSharing;
@property (nonatomic) char zoneSharing;
@property (nonatomic) char hasHierarchicalSharing;
@property (nonatomic) char hierarchicalSharing;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSharingType:(id)a0;
- (id)sharingTypeAsString:(int)a0;

@end
