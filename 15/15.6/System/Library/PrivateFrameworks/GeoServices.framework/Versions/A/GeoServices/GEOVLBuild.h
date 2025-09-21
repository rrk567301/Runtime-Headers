@interface GEOVLBuild : PBCodable <NSCopying> {
    unsigned long long _identifier;
    unsigned int _dataFormatVersion;
    unsigned int _dataOutputVersion;
    unsigned int _routingKey;
    struct { unsigned char has_identifier : 1; unsigned char has_dataFormatVersion : 1; unsigned char has_dataOutputVersion : 1; unsigned char has_routingKey : 1; } _flags;
}

@property (nonatomic) char hasIdentifier;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic) char hasDataOutputVersion;
@property (nonatomic) unsigned int dataOutputVersion;
@property (nonatomic) char hasDataFormatVersion;
@property (nonatomic) unsigned int dataFormatVersion;
@property (nonatomic) char hasRoutingKey;
@property (nonatomic) unsigned int routingKey;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
