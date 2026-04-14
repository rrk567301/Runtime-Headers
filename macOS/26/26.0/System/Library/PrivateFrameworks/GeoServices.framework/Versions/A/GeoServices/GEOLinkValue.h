@class PBUnknownFields;

@interface GEOLinkValue : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _appLinkValue;
    struct { unsigned char has_appLinkValue : 1; } _flags;
}

@property (nonatomic) BOOL hasAppLinkValue;
@property (nonatomic) int appLinkValue;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsAppLinkValue:(id)a0;
- (id)appLinkValueAsString:(int)a0;

@end
