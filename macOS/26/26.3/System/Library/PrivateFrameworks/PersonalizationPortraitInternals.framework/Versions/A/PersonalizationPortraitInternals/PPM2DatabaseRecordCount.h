@class NSString;

@interface PPM2DatabaseRecordCount : PBCodable <NSCopying> {
    struct { unsigned char schemaVersion : 1; } _has;
}

@property (nonatomic) BOOL hasSchemaVersion;
@property (nonatomic) unsigned int schemaVersion;
@property (readonly, nonatomic) BOOL hasTableName;
@property (retain, nonatomic) NSString *tableName;
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;

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
