@class NSString, NSMutableArray, PBDataReader;

@interface GEOLPRLicensePlateValidationRule : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_impliedPowerTypeKeys;
    NSMutableArray *_impliedVehicleTypeKeys;
    NSString *_regularExpression;
    NSString *_validCharacters;
    NSMutableArray *_validationRanges;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _maxLength;
    unsigned int _minLength;
    struct { unsigned char has_maxLength : 1; unsigned char has_minLength : 1; unsigned char read_impliedPowerTypeKeys : 1; unsigned char read_impliedVehicleTypeKeys : 1; unsigned char read_regularExpression : 1; unsigned char read_validCharacters : 1; unsigned char read_validationRanges : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasRegularExpression;
@property (retain, nonatomic) NSString *regularExpression;
@property (nonatomic) BOOL hasMinLength;
@property (nonatomic) unsigned int minLength;
@property (nonatomic) BOOL hasMaxLength;
@property (nonatomic) unsigned int maxLength;
@property (readonly, nonatomic) BOOL hasValidCharacters;
@property (retain, nonatomic) NSString *validCharacters;
@property (retain, nonatomic) NSMutableArray *validationRanges;
@property (retain, nonatomic) NSMutableArray *impliedPowerTypeKeys;
@property (retain, nonatomic) NSMutableArray *impliedVehicleTypeKeys;

+ (BOOL)isValid:(id)a0;
+ (Class)validationRangesType;
+ (Class)impliedPowerTypeKeyType;
+ (Class)impliedVehicleTypeKeyType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearValidationRanges;
- (void)addValidationRanges:(id)a0;
- (unsigned long long)validationRangesCount;
- (id)validationRangesAtIndex:(unsigned long long)a0;
- (void)clearImpliedPowerTypeKeys;
- (void)addImpliedPowerTypeKey:(id)a0;
- (unsigned long long)impliedPowerTypeKeysCount;
- (id)impliedPowerTypeKeyAtIndex:(unsigned long long)a0;
- (void)clearImpliedVehicleTypeKeys;
- (void)addImpliedVehicleTypeKey:(id)a0;
- (unsigned long long)impliedVehicleTypeKeysCount;
- (id)impliedVehicleTypeKeyAtIndex:(unsigned long long)a0;

@end
