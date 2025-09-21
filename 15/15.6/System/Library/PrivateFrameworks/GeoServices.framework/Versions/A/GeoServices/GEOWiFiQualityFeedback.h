@interface GEOWiFiQualityFeedback : PBCodable <NSCopying> {
    unsigned int _maxValue;
    int _type;
    unsigned int _value;
    struct { unsigned char has_maxValue : 1; unsigned char has_type : 1; unsigned char has_value : 1; } _flags;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasValue;
@property (nonatomic) unsigned int value;
@property (nonatomic) char hasMaxValue;
@property (nonatomic) unsigned int maxValue;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
