@class NSString, NSData, SISchemaUUID;

@interface GMSSchemaGMSModelRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char accountType : 1; unsigned char isWebSearchUsed : 1; unsigned char isUserSignedIn : 1; unsigned char modelParty : 1; unsigned char modelLocation : 1; unsigned char useCase : 1; unsigned char externalPartner : 1; unsigned char genAIAgentUsed : 1; } _has;
}

@property (nonatomic) int accountType;
@property (nonatomic) char hasAccountType;
@property (nonatomic) char isWebSearchUsed;
@property (nonatomic) char hasIsWebSearchUsed;
@property (nonatomic) char isUserSignedIn;
@property (nonatomic) char hasIsUserSignedIn;
@property (nonatomic) int modelParty;
@property (nonatomic) char hasModelParty;
@property (nonatomic) int modelLocation;
@property (nonatomic) char hasModelLocation;
@property (nonatomic) int useCase;
@property (nonatomic) char hasUseCase;
@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) char hasModelVersion;
@property (copy, nonatomic) NSString *configVersion;
@property (nonatomic) char hasConfigVersion;
@property (copy, nonatomic) NSString *promptVersion;
@property (nonatomic) char hasPromptVersion;
@property (copy, nonatomic) NSString *modelName;
@property (nonatomic) char hasModelName;
@property (nonatomic) int externalPartner;
@property (nonatomic) char hasExternalPartner;
@property (retain, nonatomic) SISchemaUUID *gmsClientRequestIdentifier;
@property (nonatomic) char hasGmsClientRequestIdentifier;
@property (retain, nonatomic) SISchemaUUID *executorTraceID;
@property (nonatomic) char hasExecutorTraceID;
@property (nonatomic) int genAIAgentUsed;
@property (nonatomic) char hasGenAIAgentUsed;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteModelName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAccountType;
- (void)deleteConfigVersion;
- (void)deleteExecutorTraceID;
- (void)deleteExternalPartner;
- (void)deleteGenAIAgentUsed;
- (void)deleteGmsClientRequestIdentifier;
- (void)deleteIsUserSignedIn;
- (void)deleteIsWebSearchUsed;
- (void)deleteModelLocation;
- (void)deleteModelParty;
- (void)deleteModelVersion;
- (void)deletePromptVersion;
- (void)deleteUseCase;
- (id)suppressMessageUnderConditions;

@end
