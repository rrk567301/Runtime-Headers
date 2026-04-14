@class NSMutableArray;

@interface NTPBErrorResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *errors;

+ (Class)errorsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearErrors;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addErrors:(id)a0;
- (id)errorsAtIndex:(unsigned long long)a0;
- (unsigned long long)errorsCount;

@end
