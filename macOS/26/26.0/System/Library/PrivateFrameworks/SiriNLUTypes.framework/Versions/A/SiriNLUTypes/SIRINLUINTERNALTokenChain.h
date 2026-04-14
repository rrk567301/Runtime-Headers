@class NSString, NSMutableArray;

@interface SIRINLUINTERNALTokenChain : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSMutableArray *tokens;

+ (Class)tokensType;

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
- (void)addTokens:(id)a0;
- (void)clearTokens;
- (id)tokensAtIndex:(unsigned long long)a0;
- (unsigned long long)tokensCount;

@end
