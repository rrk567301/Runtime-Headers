@class NSString, NSMutableArray;

@interface SIRINLUINTERNALTokenChain : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) char hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSMutableArray *tokens;

+ (Class)tokensType;

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
- (id)tokensAtIndex:(unsigned long long)a0;
- (void)addTokens:(id)a0;
- (void)clearTokens;
- (unsigned long long)tokensCount;

@end
