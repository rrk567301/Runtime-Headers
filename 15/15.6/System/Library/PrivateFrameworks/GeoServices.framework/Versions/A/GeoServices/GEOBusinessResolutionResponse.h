@class NSString;

@interface GEOBusinessResolutionResponse : PBCodable <NSCopying> {
    NSString *_businessName;
    unsigned long long _businessUID;
    int _status;
    struct { unsigned char has_businessUID : 1; unsigned char has_status : 1; } _flags;
}

@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) char hasBusinessName;
@property (retain, nonatomic) NSString *businessName;
@property (nonatomic) char hasBusinessUID;
@property (nonatomic) unsigned long long businessUID;

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
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
