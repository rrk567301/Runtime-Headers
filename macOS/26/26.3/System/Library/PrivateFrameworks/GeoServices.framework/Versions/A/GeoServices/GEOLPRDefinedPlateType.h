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

- (id)dictionaryRepresentation;
- (id)initWithData:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)description;
- (id)init;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearConditions;
- (void)addConditions:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)conditionsCount;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (id)conditionsAtIndex:(unsigned long long)a0;

@end
