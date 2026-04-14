@class PBUnknownFields;

@interface GEOCacheHit : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _bytes;
    unsigned int _count;
    int _requestorType;
    int _tileSourceType;
    struct { unsigned char has_bytes : 1; unsigned char has_count : 1; unsigned char has_requestorType : 1; unsigned char has_tileSourceType : 1; } _flags;
}

@property (nonatomic) BOOL hasRequestorType;
@property (nonatomic) int requestorType;
@property (nonatomic) BOOL hasTileSourceType;
@property (nonatomic) int tileSourceType;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasBytes;
@property (nonatomic) unsigned int bytes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (int)StringAsRequestorType:(id)a0;
- (int)StringAsTileSourceType:(id)a0;
- (id)requestorTypeAsString:(int)a0;
- (id)tileSourceTypeAsString:(int)a0;

@end
