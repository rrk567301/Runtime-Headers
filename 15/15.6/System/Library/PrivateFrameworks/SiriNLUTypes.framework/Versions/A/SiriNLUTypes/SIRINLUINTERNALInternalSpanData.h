@class SIRINLUINTERNALSiriVocabularySpanData, SIRINLUINTERNALOvertonKGSpanData, SIRINLUINTERNALMentionResolverSpanData, SIRINLUINTERNALPLUMSpanData, SIRINLUINTERNALMentionDetectorSpanData;

@interface SIRINLUINTERNALInternalSpanData : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasSiriVocabularySpanData;
@property (retain, nonatomic) SIRINLUINTERNALSiriVocabularySpanData *siriVocabularySpanData;
@property (readonly, nonatomic) char hasPlumSpanData;
@property (retain, nonatomic) SIRINLUINTERNALPLUMSpanData *plumSpanData;
@property (readonly, nonatomic) char hasOvertonKgSpanData;
@property (retain, nonatomic) SIRINLUINTERNALOvertonKGSpanData *overtonKgSpanData;
@property (readonly, nonatomic) char hasMentionDetectorSpanData;
@property (retain, nonatomic) SIRINLUINTERNALMentionDetectorSpanData *mentionDetectorSpanData;
@property (readonly, nonatomic) char hasMentionResolverSpanData;
@property (retain, nonatomic) SIRINLUINTERNALMentionResolverSpanData *mentionResolverSpanData;

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

@end
