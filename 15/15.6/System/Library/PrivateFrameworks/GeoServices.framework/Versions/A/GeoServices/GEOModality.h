@interface GEOModality : PBCodable <NSCopying> {
    double _timestamp;
    int _confidence;
    char _expectedModality;
    char _notMoving;
    struct { unsigned char has_timestamp : 1; unsigned char has_confidence : 1; unsigned char has_expectedModality : 1; unsigned char has_notMoving : 1; } _flags;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasExpectedModality;
@property (nonatomic) char expectedModality;
@property (nonatomic) char hasNotMoving;
@property (nonatomic) char notMoving;
@property (nonatomic) char hasConfidence;
@property (nonatomic) int confidence;

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
- (int)StringAsConfidence:(id)a0;
- (id)confidenceAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
