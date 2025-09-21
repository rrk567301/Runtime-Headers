@class NSString, NSMutableArray;

@interface SIRINLUINTERNALSubwordTokenChain : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSMutableArray *subwordTokens;

+ (Class)subwordTokensType;

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
- (id)subwordTokensAtIndex:(unsigned long long)a0;
- (void)addSubwordTokens:(id)a0;
- (void)clearSubwordTokens;
- (unsigned long long)subwordTokensCount;

@end
