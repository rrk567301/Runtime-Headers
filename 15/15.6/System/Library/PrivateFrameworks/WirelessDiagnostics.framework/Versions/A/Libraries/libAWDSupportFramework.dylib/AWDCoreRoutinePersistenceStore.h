@interface AWDCoreRoutinePersistenceStore : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char migratorDestroyedStoreReason : 1; unsigned char migratorFailed : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasMigratorFailed;
@property (nonatomic) char migratorFailed;
@property (nonatomic) char hasMigratorDestroyedStoreReason;
@property (nonatomic) int migratorDestroyedStoreReason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
