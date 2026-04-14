@class NSMutableArray;

@interface HDCodableCodedValueCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *codedValues;

+ (Class)codedValuesType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addCodedValues:(id)a0;
- (void)clearCodedValues;
- (id)codedValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)codedValuesCount;

@end
