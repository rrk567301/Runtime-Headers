@interface AWDCoreRoutinePersistenceStoreMigrationDuration : PBCodable <NSCopying> {
    struct { unsigned char migrationTimeInterval : 1; unsigned char timestamp : 1; unsigned char byteSize : 1; unsigned char deviceClass : 1; unsigned char nextModelVersion : 1; unsigned char previousModelVersion : 1; unsigned char storeType : 1; unsigned char didVacuum : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasStoreType;
@property (nonatomic) int storeType;
@property (nonatomic) char hasMigrationTimeInterval;
@property (nonatomic) double migrationTimeInterval;
@property (nonatomic) char hasDidVacuum;
@property (nonatomic) char didVacuum;
@property (nonatomic) char hasDeviceClass;
@property (nonatomic) int deviceClass;
@property (nonatomic) char hasPreviousModelVersion;
@property (nonatomic) int previousModelVersion;
@property (nonatomic) char hasNextModelVersion;
@property (nonatomic) int nextModelVersion;
@property (nonatomic) char hasByteSize;
@property (nonatomic) int byteSize;

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
