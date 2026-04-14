@class SIRINLUINTERNALSiriVocabularySpanData, SIRINLUINTERNALPLUMSpanData, SIRINLUINTERNALOvertonKGSpanData;

@interface SIRINLUINTERNALInternalSpanData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSiriVocabularySpanData;
@property (retain, nonatomic) SIRINLUINTERNALSiriVocabularySpanData *siriVocabularySpanData;
@property (readonly, nonatomic) BOOL hasPlumSpanData;
@property (retain, nonatomic) SIRINLUINTERNALPLUMSpanData *plumSpanData;
@property (readonly, nonatomic) BOOL hasOvertonKgSpanData;
@property (retain, nonatomic) SIRINLUINTERNALOvertonKGSpanData *overtonKgSpanData;

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

@end
