@class NSData, HDCodableMessageVersion;

@interface HDCodableClinicalDeletedAccount : PBCodable <NSCopying> {
    struct { unsigned char deletionDate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSyncIdentifier;
@property (retain, nonatomic) NSData *syncIdentifier;
@property (nonatomic) BOOL hasDeletionDate;
@property (nonatomic) double deletionDate;
@property (readonly, nonatomic) BOOL hasMessageVersion;
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion;

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

@end
