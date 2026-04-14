@class NSMutableArray;

@interface NTPBErrorResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *errors;

+ (Class)errorsType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)clearErrors;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addErrors:(id)a0;
- (id)errorsAtIndex:(unsigned long long)a0;
- (unsigned long long)errorsCount;

@end
