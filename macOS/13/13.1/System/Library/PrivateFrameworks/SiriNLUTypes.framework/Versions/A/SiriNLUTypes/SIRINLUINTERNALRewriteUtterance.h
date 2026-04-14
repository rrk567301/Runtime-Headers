@class NSString, SIRINLUEXTERNALUUID, NSMutableArray;

@interface SIRINLUINTERNALRewriteUtterance : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAsrId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *asrId;
@property (readonly, nonatomic) BOOL hasUtterance;
@property (retain, nonatomic) NSString *utterance;
@property (retain, nonatomic) NSMutableArray *asrUtteranceTokens;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) double confidence;
@property (retain, nonatomic) NSMutableArray *nluInternalTokens;

+ (Class)asrUtteranceTokensType;
+ (Class)nluInternalTokensType;

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
- (void)addAsrUtteranceTokens:(id)a0;
- (void)addNluInternalTokens:(id)a0;
- (void)clearAsrUtteranceTokens;
- (unsigned long long)asrUtteranceTokensCount;
- (id)asrUtteranceTokensAtIndex:(unsigned long long)a0;
- (void)clearNluInternalTokens;
- (unsigned long long)nluInternalTokensCount;
- (id)nluInternalTokensAtIndex:(unsigned long long)a0;

@end
