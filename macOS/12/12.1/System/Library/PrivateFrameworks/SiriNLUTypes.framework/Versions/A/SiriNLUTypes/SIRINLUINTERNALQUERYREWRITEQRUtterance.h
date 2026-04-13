@class NSString, SIRINLUEXTERNALUUID, NSMutableArray;

@interface SIRINLUINTERNALQUERYREWRITEQRUtterance : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAsrId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *asrId;
@property (readonly, nonatomic) BOOL hasUtterance;
@property (retain, nonatomic) NSString *utterance;
@property (retain, nonatomic) NSMutableArray *utteranceTokens;
@property (retain, nonatomic) NSMutableArray *asrUtteranceTokens;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) double confidence;

+ (id)options;
+ (Class)utteranceTokensType;
+ (Class)asrUtteranceTokensType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addAsrUtteranceTokens:(id)a0;
- (void)addUtteranceTokens:(id)a0;
- (unsigned long long)utteranceTokensCount;
- (void)clearUtteranceTokens;
- (id)utteranceTokensAtIndex:(unsigned long long)a0;
- (unsigned long long)asrUtteranceTokensCount;
- (void)clearAsrUtteranceTokens;
- (id)asrUtteranceTokensAtIndex:(unsigned long long)a0;

@end
