@class NSString, NSMutableArray;

@interface SIRINLUINTERNALSubwordTokenChain : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSMutableArray *subwordTokens;

+ (Class)subwordTokensType;

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
- (id)subwordTokensAtIndex:(unsigned long long)a0;
- (void)addSubwordTokens:(id)a0;
- (void)clearSubwordTokens;
- (unsigned long long)subwordTokensCount;

@end
