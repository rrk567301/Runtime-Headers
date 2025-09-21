@class NSMutableArray;

@interface CPLServerFeedbackMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *keysAndValues;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addKeysAndValues:(id)a0;
- (void)clearKeysAndValues;
- (id)keysAndValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)keysAndValuesCount;

@end
