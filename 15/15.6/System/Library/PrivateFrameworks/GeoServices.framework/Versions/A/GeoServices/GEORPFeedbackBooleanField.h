@interface GEORPFeedbackBooleanField : PBCodable <NSCopying> {
    char _edited;
    char _original;
    struct { unsigned char has_edited : 1; unsigned char has_original : 1; } _flags;
}

@property (nonatomic) char hasOriginal;
@property (nonatomic) char original;
@property (nonatomic) char hasEdited;
@property (nonatomic) char edited;

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
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
