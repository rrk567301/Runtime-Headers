@class NSMutableArray;

@interface HDCodableCodedValueCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *codedValues;

+ (Class)codedValuesType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addCodedValues:(id)a0;
- (void)clearCodedValues;
- (id)codedValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)codedValuesCount;

@end
