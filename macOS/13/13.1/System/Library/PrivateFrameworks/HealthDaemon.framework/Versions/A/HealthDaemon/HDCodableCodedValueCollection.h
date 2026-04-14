@class NSMutableArray;

@interface HDCodableCodedValueCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *codedValues;

+ (Class)codedValuesType;

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
- (void)clearCodedValues;
- (void)addCodedValues:(id)a0;
- (unsigned long long)codedValuesCount;
- (id)codedValuesAtIndex:(unsigned long long)a0;

@end
