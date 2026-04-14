@class NSMutableArray;

@interface NTPBErrorResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *errors;

+ (Class)errorsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (void)clearErrors;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addErrors:(id)a0;
- (id)errorsAtIndex:(unsigned long long)a0;
- (unsigned long long)errorsCount;

@end
