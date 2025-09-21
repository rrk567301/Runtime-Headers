@class PBUnknownFields;

@interface GEOCacheHit : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _bytes;
    unsigned int _count;
    int _requestorType;
    int _tileSourceType;
    struct { unsigned char has_bytes : 1; unsigned char has_count : 1; unsigned char has_requestorType : 1; unsigned char has_tileSourceType : 1; } _flags;
}

@property (nonatomic) char hasRequestorType;
@property (nonatomic) int requestorType;
@property (nonatomic) char hasTileSourceType;
@property (nonatomic) int tileSourceType;
@property (nonatomic) char hasCount;
@property (nonatomic) unsigned int count;
@property (nonatomic) char hasBytes;
@property (nonatomic) unsigned int bytes;
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
- (int)StringAsRequestorType:(id)a0;
- (int)StringAsTileSourceType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)requestorTypeAsString:(int)a0;
- (id)tileSourceTypeAsString:(int)a0;

@end
