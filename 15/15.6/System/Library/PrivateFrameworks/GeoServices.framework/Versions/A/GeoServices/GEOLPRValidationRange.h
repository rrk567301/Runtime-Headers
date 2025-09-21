@class NSString;

@interface GEOLPRValidationRange : PBCodable <NSCopying> {
    NSString *_validCharacters;
    int _end;
    int _start;
    struct { unsigned char has_end : 1; unsigned char has_start : 1; } _flags;
}

@property (nonatomic) char hasStart;
@property (nonatomic) int start;
@property (nonatomic) char hasEnd;
@property (nonatomic) int end;
@property (readonly, nonatomic) char hasValidCharacters;
@property (retain, nonatomic) NSString *validCharacters;

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
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
