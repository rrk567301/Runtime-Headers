@class GEOMapRegion, PBUnknownFields;

@interface GEORestrictedZoneId : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_boundingBox;
    unsigned long long _identifier;
    int _type;
    unsigned int _version;
    struct { unsigned char has_identifier : 1; unsigned char has_type : 1; unsigned char has_version : 1; } _flags;
}

@property (nonatomic) char hasIdentifier;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasBoundingBox;
@property (retain, nonatomic) GEOMapRegion *boundingBox;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
