@class NSString;

@interface PPM2DatabaseRecordCount : PBCodable <NSCopying> {
    struct { unsigned char schemaVersion : 1; } _has;
}

@property (nonatomic) char hasSchemaVersion;
@property (nonatomic) unsigned int schemaVersion;
@property (readonly, nonatomic) char hasTableName;
@property (retain, nonatomic) NSString *tableName;
@property (readonly, nonatomic) char hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;

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
