@class FLSchemaFLCandidateIdentifier, NSData, FLSchemaFLCandidateCategory;

@interface FLSchemaFLCandidateEvaluation : SISchemaInstrumentationMessage {
    struct { unsigned char resolution : 1; unsigned char outcome : 1; } _has;
}

@property (retain, nonatomic) FLSchemaFLCandidateCategory *candidateCategory;
@property (nonatomic) BOOL hasCandidateCategory;
@property (retain, nonatomic) FLSchemaFLCandidateIdentifier *candidateIdentifier;
@property (nonatomic) BOOL hasCandidateIdentifier;
@property (nonatomic) int resolution;
@property (nonatomic) BOOL hasResolution;
@property (nonatomic) int outcome;
@property (nonatomic) BOOL hasOutcome;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteCandidateCategory;
- (void)deleteCandidateIdentifier;
- (void)deleteOutcome;
- (void)deleteResolution;

@end
