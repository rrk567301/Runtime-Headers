@class NSData;

@interface IFTSchemaIFTCandidatePromptStatus : SISchemaInstrumentationMessage

@property (nonatomic) BOOL notPrompted;
@property (nonatomic) BOOL hasNotPrompted;
@property (nonatomic) BOOL confirmed;
@property (nonatomic) BOOL hasConfirmed;
@property (nonatomic) long long picked;
@property (nonatomic) BOOL hasPicked;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Candidatepromptstatus;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteConfirmed;
- (void)deleteNotPrompted;
- (void)deletePicked;

@end
