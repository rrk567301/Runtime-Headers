@class NSString, NSMutableArray, PBDataReader;

@interface GEOLPRDefinedPlateType : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_conditions;
    NSString *_desc;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_conditions : 1; unsigned char read_desc : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *conditions;
@property (readonly, nonatomic) BOOL hasDesc;
@property (retain, nonatomic) NSString *desc;

+ (BOOL)isValid:(id)a0;
+ (Class)conditionsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (void)addConditions:(id)a0;
- (unsigned long long)conditionsCount;
- (void)clearConditions;
- (id)conditionsAtIndex:(unsigned long long)a0;

@end
