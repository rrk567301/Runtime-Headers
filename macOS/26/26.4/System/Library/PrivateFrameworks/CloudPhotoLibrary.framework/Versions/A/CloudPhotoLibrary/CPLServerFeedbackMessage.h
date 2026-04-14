@class NSMutableArray;

@interface CPLServerFeedbackMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *keysAndValues;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addKeysAndValues:(id)a0;
- (void)clearKeysAndValues;
- (id)keysAndValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)keysAndValuesCount;

@end
