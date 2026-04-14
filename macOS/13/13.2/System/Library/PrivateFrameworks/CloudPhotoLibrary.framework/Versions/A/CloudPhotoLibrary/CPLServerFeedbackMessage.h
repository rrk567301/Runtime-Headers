@class NSMutableArray;

@interface CPLServerFeedbackMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *keysAndValues;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearKeysAndValues;
- (void)addKeysAndValues:(id)a0;
- (unsigned long long)keysAndValuesCount;
- (id)keysAndValuesAtIndex:(unsigned long long)a0;

@end
