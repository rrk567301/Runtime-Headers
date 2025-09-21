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
@property (readonly, nonatomic) char hasDesc;
@property (retain, nonatomic) NSString *desc;

+ (Class)conditionsType;
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
- (void)clearConditions;
- (unsigned long long)conditionsCount;
- (void)addConditions:(id)a0;
- (id)conditionsAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
