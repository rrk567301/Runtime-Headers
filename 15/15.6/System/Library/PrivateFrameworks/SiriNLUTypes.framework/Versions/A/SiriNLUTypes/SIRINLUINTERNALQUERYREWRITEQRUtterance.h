@class NSString, SIRINLUEXTERNALUUID, NSMutableArray;

@interface SIRINLUINTERNALQUERYREWRITEQRUtterance : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; } _has;
}

@property (readonly, nonatomic) char hasAsrId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *asrId;
@property (readonly, nonatomic) char hasUtterance;
@property (retain, nonatomic) NSString *utterance;
@property (retain, nonatomic) NSMutableArray *utteranceTokens;
@property (retain, nonatomic) NSMutableArray *asrUtteranceTokens;
@property (nonatomic) char hasConfidence;
@property (nonatomic) double confidence;

+ (id)options;
+ (Class)asrUtteranceTokensType;
+ (Class)utteranceTokensType;

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
- (void)addAsrUtteranceTokens:(id)a0;
- (void)addUtteranceTokens:(id)a0;
- (id)asrUtteranceTokensAtIndex:(unsigned long long)a0;
- (unsigned long long)asrUtteranceTokensCount;
- (void)clearAsrUtteranceTokens;
- (void)clearUtteranceTokens;
- (id)utteranceTokensAtIndex:(unsigned long long)a0;
- (unsigned long long)utteranceTokensCount;

@end
