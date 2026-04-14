@class NSString, SIRINLUEXTERNALUUID, NSMutableArray;

@interface SIRINLUEXTERNALAsrHypothesis : PBCodable <NSCopying> {
    struct { unsigned char probability : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdA;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *idA;
@property (readonly, nonatomic) BOOL hasUtterance;
@property (retain, nonatomic) NSString *utterance;
@property (nonatomic) BOOL hasProbability;
@property (nonatomic) double probability;
@property (retain, nonatomic) NSMutableArray *asrTokens;
@property (retain, nonatomic) NSMutableArray *rewrittenUtterances;

+ (Class)asrTokensType;
+ (Class)rewrittenUtterancesType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearAsrTokens;
- (void)addAsrTokens:(id)a0;
- (unsigned long long)asrTokensCount;
- (id)asrTokensAtIndex:(unsigned long long)a0;
- (void)clearRewrittenUtterances;
- (void)addRewrittenUtterances:(id)a0;
- (unsigned long long)rewrittenUtterancesCount;
- (id)rewrittenUtterancesAtIndex:(unsigned long long)a0;

@end
