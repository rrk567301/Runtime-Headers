@class NSData, HDCodableSyncIdentity, HDCodableMessageVersion;

@interface HDCodableClinicalDeletedAccount : PBCodable <NSCopying> {
    struct { unsigned char deletionDate : 1; unsigned char deletionReason : 1; } _has;
}

@property (readonly, nonatomic) char hasSyncIdentifier;
@property (retain, nonatomic) NSData *syncIdentifier;
@property (nonatomic) char hasDeletionDate;
@property (nonatomic) double deletionDate;
@property (readonly, nonatomic) char hasMessageVersion;
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion;
@property (nonatomic) char hasDeletionReason;
@property (nonatomic) long long deletionReason;
@property (readonly, nonatomic) char hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

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

@end
