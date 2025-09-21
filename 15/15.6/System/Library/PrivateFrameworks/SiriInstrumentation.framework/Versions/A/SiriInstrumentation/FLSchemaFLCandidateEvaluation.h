@class FLSchemaFLCandidateIdentifier, NSData, FLSchemaFLCandidateCategory;

@interface FLSchemaFLCandidateEvaluation : SISchemaInstrumentationMessage {
    struct { unsigned char resolution : 1; unsigned char outcome : 1; } _has;
}

@property (retain, nonatomic) FLSchemaFLCandidateCategory *candidateCategory;
@property (nonatomic) char hasCandidateCategory;
@property (retain, nonatomic) FLSchemaFLCandidateIdentifier *candidateIdentifier;
@property (nonatomic) char hasCandidateIdentifier;
@property (nonatomic) int resolution;
@property (nonatomic) char hasResolution;
@property (nonatomic) int outcome;
@property (nonatomic) char hasOutcome;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCandidateCategory;
- (void)deleteCandidateIdentifier;
- (void)deleteOutcome;
- (void)deleteResolution;
- (id)suppressMessageUnderConditions;

@end
