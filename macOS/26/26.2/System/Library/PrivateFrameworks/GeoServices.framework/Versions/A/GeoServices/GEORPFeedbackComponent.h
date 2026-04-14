@class NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackComponent : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_values;
    int _status;
    int _type;
    struct { unsigned char has_status : 1; unsigned char has_type : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *values;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)valueType;

- (id)typeAsString:(int)a0;
- (int)StringAsType:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addValue:(id)a0;
- (int)StringAsStatus:(id)a0;
- (void)clearValues;
- (void)clearUnknownFields:(BOOL)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (id)statusAsString:(int)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (unsigned long long)valuesCount;
- (id)initWithDictionary:(id)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;

@end
