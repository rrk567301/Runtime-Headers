@interface GEORideBookingIntentResponseFailure : PBCodable <NSCopying> {
    int _failure;
    int _intent;
    struct { unsigned char has_failure : 1; unsigned char has_intent : 1; } _flags;
}

@property (nonatomic) char hasIntent;
@property (nonatomic) int intent;
@property (nonatomic) char hasFailure;
@property (nonatomic) int failure;

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
- (id)intentAsString:(int)a0;
- (int)StringAsIntent:(id)a0;
- (int)StringAsFailure:(id)a0;
- (id)failureAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
