@class NSData;

@interface INFERENCESchemaINFERENCEABModelEvaluated : SISchemaInstrumentationMessage {
    struct { unsigned char projectIntent : 1; unsigned char numCandidateApps : 1; unsigned char isDecisionCorrect : 1; unsigned char modelVersion : 1; unsigned char isModelDisambiguation : 1; unsigned char isModelConfirmation : 1; unsigned char userPersona : 1; } _has;
}

@property (nonatomic) int projectIntent;
@property (nonatomic) char hasProjectIntent;
@property (nonatomic) int numCandidateApps;
@property (nonatomic) char hasNumCandidateApps;
@property (nonatomic) char isDecisionCorrect;
@property (nonatomic) char hasIsDecisionCorrect;
@property (nonatomic) unsigned int modelVersion;
@property (nonatomic) char hasModelVersion;
@property (nonatomic) char isModelDisambiguation;
@property (nonatomic) char hasIsModelDisambiguation;
@property (nonatomic) char isModelConfirmation;
@property (nonatomic) char hasIsModelConfirmation;
@property (nonatomic) int userPersona;
@property (nonatomic) char hasUserPersona;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsDecisionCorrect;
- (void)deleteIsModelConfirmation;
- (void)deleteIsModelDisambiguation;
- (void)deleteModelVersion;
- (void)deleteNumCandidateApps;
- (void)deleteProjectIntent;
- (void)deleteUserPersona;
- (id)suppressMessageUnderConditions;

@end
