@class NSMutableArray;

@interface SIRINLUEXTERNALSystemGaveOptions : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *choices;

+ (Class)choicesType;

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
- (void)clearChoices;
- (void)addChoices:(id)a0;
- (unsigned long long)choicesCount;
- (id)choicesAtIndex:(unsigned long long)a0;

@end
