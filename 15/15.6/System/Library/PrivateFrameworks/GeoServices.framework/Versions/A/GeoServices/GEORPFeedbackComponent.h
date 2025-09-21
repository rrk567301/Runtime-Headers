@class NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackComponent : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_values;
    int _status;
    int _type;
    struct { unsigned char has_status : 1; unsigned char has_type : 1; } _flags;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *values;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)valueType;
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
- (void)addValue:(id)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (void)clearValues;
- (unsigned long long)valuesCount;
- (int)StringAsType:(id)a0;
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (id)typeAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
