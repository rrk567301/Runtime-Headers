@interface GEORPCorrectedFlag : PBCodable <NSCopying> {
    int _flag;
    char _correctedValue;
    char _originalValue;
    struct { unsigned char has_flag : 1; unsigned char has_correctedValue : 1; unsigned char has_originalValue : 1; } _flags;
}

@property (nonatomic) char hasFlag;
@property (nonatomic) int flag;
@property (nonatomic) char hasOriginalValue;
@property (nonatomic) char originalValue;
@property (nonatomic) char hasCorrectedValue;
@property (nonatomic) char correctedValue;

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
- (int)StringAsFlag:(id)a0;
- (id)flagAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
