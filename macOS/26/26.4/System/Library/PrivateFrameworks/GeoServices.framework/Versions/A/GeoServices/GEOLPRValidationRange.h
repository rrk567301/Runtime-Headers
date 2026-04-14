@class NSString;

@interface GEOLPRValidationRange : PBCodable <NSCopying> {
    NSString *_validCharacters;
    int _end;
    int _start;
    struct { unsigned char has_end : 1; unsigned char has_start : 1; } _flags;
}

@property (nonatomic) BOOL hasStart;
@property (nonatomic) int start;
@property (nonatomic) BOOL hasEnd;
@property (nonatomic) int end;
@property (readonly, nonatomic) BOOL hasValidCharacters;
@property (retain, nonatomic) NSString *validCharacters;

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
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;

@end
