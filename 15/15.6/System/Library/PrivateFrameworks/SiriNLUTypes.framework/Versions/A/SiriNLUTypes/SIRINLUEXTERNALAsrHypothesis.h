@class NSString, SIRINLUEXTERNALUUID, NSMutableArray;

@interface SIRINLUEXTERNALAsrHypothesis : PBCodable <NSCopying> {
    struct { unsigned char probability : 1; } _has;
}

@property (readonly, nonatomic) char hasIdA;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *idA;
@property (readonly, nonatomic) char hasUtterance;
@property (retain, nonatomic) NSString *utterance;
@property (nonatomic) char hasProbability;
@property (nonatomic) double probability;
@property (retain, nonatomic) NSMutableArray *asrTokens;
@property (retain, nonatomic) NSMutableArray *rewrittenUtterances;

+ (Class)asrTokensType;
+ (Class)rewrittenUtterancesType;

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
- (void)addRewrittenUtterances:(id)a0;
- (void)clearRewrittenUtterances;
- (id)rewrittenUtterancesAtIndex:(unsigned long long)a0;
- (unsigned long long)rewrittenUtterancesCount;
- (void)addAsrTokens:(id)a0;
- (unsigned long long)asrTokensCount;
- (id)asrTokensAtIndex:(unsigned long long)a0;
- (void)clearAsrTokens;

@end
