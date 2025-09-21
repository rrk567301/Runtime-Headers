@class NSMutableArray;

@interface GEOPDPlaceSummaryLayoutLine : PBCodable <NSCopying> {
    NSMutableArray *_units;
    char _isDynamicContextLine;
    char _shouldOmitSpacingDelimiter;
    struct { unsigned char has_isDynamicContextLine : 1; unsigned char has_shouldOmitSpacingDelimiter : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *units;
@property (nonatomic) char hasIsDynamicContextLine;
@property (nonatomic) char isDynamicContextLine;
@property (nonatomic) char hasShouldOmitSpacingDelimiter;
@property (nonatomic) char shouldOmitSpacingDelimiter;

+ (char)isValid:(id)a0;
+ (Class)unitType;

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
- (void)addUnit:(id)a0;
- (void)clearUnits;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)unitAtIndex:(unsigned long long)a0;
- (unsigned long long)unitsCount;

@end
