@class NSData, HDCodableSyncIdentity, HDCodableMessageVersion;

@interface HDCodableClinicalDeletedAccount : PBCodable <NSCopying> {
    struct { unsigned char deletionDate : 1; unsigned char deletionReason : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSyncIdentifier;
@property (retain, nonatomic) NSData *syncIdentifier;
@property (nonatomic) BOOL hasDeletionDate;
@property (nonatomic) double deletionDate;
@property (readonly, nonatomic) BOOL hasMessageVersion;
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion;
@property (nonatomic) BOOL hasDeletionReason;
@property (nonatomic) long long deletionReason;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
