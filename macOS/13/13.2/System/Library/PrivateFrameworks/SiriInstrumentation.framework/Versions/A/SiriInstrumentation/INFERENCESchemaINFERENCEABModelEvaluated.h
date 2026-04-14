@class NSData;

@interface INFERENCESchemaINFERENCEABModelEvaluated : SISchemaInstrumentationMessage {
    struct { unsigned char projectIntent : 1; unsigned char numCandidateApps : 1; unsigned char isDecisionCorrect : 1; unsigned char modelVersion : 1; } _has;
}

@property (nonatomic) int projectIntent;
@property (nonatomic) BOOL hasProjectIntent;
@property (nonatomic) int numCandidateApps;
@property (nonatomic) BOOL hasNumCandidateApps;
@property (nonatomic) BOOL isDecisionCorrect;
@property (nonatomic) BOOL hasIsDecisionCorrect;
@property (nonatomic) unsigned int modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteModelVersion;
- (void)deleteProjectIntent;
- (void)deleteNumCandidateApps;
- (void)deleteIsDecisionCorrect;

@end
