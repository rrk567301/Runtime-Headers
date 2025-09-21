@class NSString, NSMutableArray;

@interface SIRINLUEXTERNALLegacyNLContext : PBCodable <NSCopying> {
    struct { unsigned char legacyContextSource : 1; unsigned char dictationPrompt : 1; unsigned char listenAfterSpeaking : 1; unsigned char strictPrompt : 1; } _has;
}

@property (nonatomic) char hasDictationPrompt;
@property (nonatomic) char dictationPrompt;
@property (nonatomic) char hasStrictPrompt;
@property (nonatomic) char strictPrompt;
@property (readonly, nonatomic) char hasPreviousDomainName;
@property (retain, nonatomic) NSString *previousDomainName;
@property (nonatomic) char hasListenAfterSpeaking;
@property (nonatomic) char listenAfterSpeaking;
@property (retain, nonatomic) NSMutableArray *renderedTexts;
@property (nonatomic) char hasLegacyContextSource;
@property (nonatomic) int legacyContextSource;
@property (retain, nonatomic) NSMutableArray *responseSemanticValues;

+ (Class)renderedTextsType;
+ (Class)responseSemanticValuesType;

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
- (void)addRenderedTexts:(id)a0;
- (void)clearRenderedTexts;
- (id)renderedTextsAtIndex:(unsigned long long)a0;
- (unsigned long long)renderedTextsCount;
- (int)StringAsLegacyContextSource:(id)a0;
- (void)addResponseSemanticValues:(id)a0;
- (void)clearResponseSemanticValues;
- (id)legacyContextSourceAsString:(int)a0;
- (id)responseSemanticValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)responseSemanticValuesCount;

@end
