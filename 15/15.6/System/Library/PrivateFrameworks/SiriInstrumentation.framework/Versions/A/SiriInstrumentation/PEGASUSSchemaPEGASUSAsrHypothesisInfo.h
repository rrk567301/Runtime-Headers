@class NSString, NSArray, PEGASUSSchemaPEGASUSAsrHypothesisIdx, NSData;

@interface PEGASUSSchemaPEGASUSAsrHypothesisInfo : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; unsigned char selectedAsPrimaryResponse : 1; unsigned char selectedAsAlternateSuggestion : 1; } _has;
}

@property (copy, nonatomic) NSString *postItnUtterance;
@property (nonatomic) char hasPostItnUtterance;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSAsrHypothesisIdx *idx;
@property (nonatomic) char hasIdx;
@property (nonatomic) float score;
@property (nonatomic) char hasScore;
@property (nonatomic) char selectedAsPrimaryResponse;
@property (nonatomic) char hasSelectedAsPrimaryResponse;
@property (nonatomic) char selectedAsAlternateSuggestion;
@property (nonatomic) char hasSelectedAsAlternateSuggestion;
@property (copy, nonatomic) NSArray *corrections;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addCorrections:(id)a0;
- (void)deleteSelectedAsPrimaryResponse;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearCorrections;
- (id)correctionsAtIndex:(unsigned long long)a0;
- (unsigned long long)correctionsCount;
- (void)deleteCorrections;
- (void)deleteIdx;
- (void)deletePostItnUtterance;
- (void)deleteScore;
- (void)deleteSelectedAsAlternateSuggestion;
- (id)suppressMessageUnderConditions;

@end
