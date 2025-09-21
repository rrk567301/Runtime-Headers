@class PBUnknownFields;

@interface GEOWaypointNameProperties : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    char _hasDisplayAddress;
    char _hasDisplayName;
    char _hasSpokenAddress;
    char _hasSpokenName;
    struct { unsigned char has_hasDisplayAddress : 1; unsigned char has_hasDisplayName : 1; unsigned char has_hasSpokenAddress : 1; unsigned char has_hasSpokenName : 1; } _flags;
}

@property (nonatomic) char hasHasDisplayName;
@property (nonatomic) char hasDisplayName;
@property (nonatomic) char hasHasSpokenName;
@property (nonatomic) char hasSpokenName;
@property (nonatomic) char hasHasDisplayAddress;
@property (nonatomic) char hasDisplayAddress;
@property (nonatomic) char hasHasSpokenAddress;
@property (nonatomic) char hasSpokenAddress;
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
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
