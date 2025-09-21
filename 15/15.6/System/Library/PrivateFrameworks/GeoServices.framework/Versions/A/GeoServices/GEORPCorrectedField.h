@class NSString, PBDataReader;

@interface GEORPCorrectedField : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_correctedValue;
    NSString *_fieldName;
    NSString *_originalValue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _field;
    char _isMarkedIncorrect;
    struct { unsigned char has_field : 1; unsigned char has_isMarkedIncorrect : 1; unsigned char read_correctedValue : 1; unsigned char read_fieldName : 1; unsigned char read_originalValue : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasField;
@property (nonatomic) int field;
@property (readonly, nonatomic) char hasFieldName;
@property (retain, nonatomic) NSString *fieldName;
@property (readonly, nonatomic) char hasOriginalValue;
@property (retain, nonatomic) NSString *originalValue;
@property (readonly, nonatomic) char hasCorrectedValue;
@property (retain, nonatomic) NSString *correctedValue;
@property (nonatomic) char hasIsMarkedIncorrect;
@property (nonatomic) char isMarkedIncorrect;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsField:(id)a0;
- (id)fieldAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
