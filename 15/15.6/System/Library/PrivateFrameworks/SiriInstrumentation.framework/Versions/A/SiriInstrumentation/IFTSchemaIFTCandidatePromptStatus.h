@class NSData;

@interface IFTSchemaIFTCandidatePromptStatus : SISchemaInstrumentationMessage

@property (nonatomic) char notPrompted;
@property (nonatomic) char hasNotPrompted;
@property (nonatomic) char confirmed;
@property (nonatomic) char hasConfirmed;
@property (nonatomic) long long picked;
@property (nonatomic) char hasPicked;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Candidatepromptstatus;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConfirmed;
- (void)deleteNotPrompted;
- (void)deletePicked;
- (id)suppressMessageUnderConditions;

@end
