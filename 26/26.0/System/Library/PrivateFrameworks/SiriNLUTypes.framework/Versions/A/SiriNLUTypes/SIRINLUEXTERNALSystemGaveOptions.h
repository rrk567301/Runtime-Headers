@class NSMutableArray;

@interface SIRINLUEXTERNALSystemGaveOptions : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *choices;

+ (Class)choicesType;

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
- (id)choicesAtIndex:(unsigned long long)a0;
- (void)addChoices:(id)a0;
- (unsigned long long)choicesCount;
- (void)clearChoices;

@end
