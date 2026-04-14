@class NSMutableArray;

@interface CPLServerFeedbackMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *keysAndValues;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addKeysAndValues:(id)a0;
- (unsigned long long)keysAndValuesCount;
- (id)keysAndValuesAtIndex:(unsigned long long)a0;
- (void)clearKeysAndValues;

@end
