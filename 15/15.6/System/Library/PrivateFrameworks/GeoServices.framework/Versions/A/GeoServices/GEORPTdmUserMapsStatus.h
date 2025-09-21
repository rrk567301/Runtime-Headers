@class PBUnknownFields;

@interface GEORPTdmUserMapsStatus : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _version;
    char _isBlocked;
    char _isTrusted;
    struct { unsigned char has_version : 1; unsigned char has_isBlocked : 1; unsigned char has_isTrusted : 1; } _flags;
}

@property (nonatomic) char hasIsBlocked;
@property (nonatomic) char isBlocked;
@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned long long version;
@property (nonatomic) char hasIsTrusted;
@property (nonatomic) char isTrusted;
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
