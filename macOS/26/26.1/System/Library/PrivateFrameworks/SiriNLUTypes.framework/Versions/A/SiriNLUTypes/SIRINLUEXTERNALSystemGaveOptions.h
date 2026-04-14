@class NSMutableArray;

@interface SIRINLUEXTERNALSystemGaveOptions : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *choices;

+ (Class)choicesType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)choicesAtIndex:(unsigned long long)a0;
- (void)addChoices:(id)a0;
- (unsigned long long)choicesCount;
- (void)clearChoices;

@end
