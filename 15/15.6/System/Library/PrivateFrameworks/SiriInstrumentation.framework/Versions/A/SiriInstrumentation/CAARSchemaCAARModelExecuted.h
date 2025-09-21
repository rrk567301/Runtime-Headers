@class CAARSchemaCAARModelOutput, SISchemaAsset, NSData, CAARSchemaCAARTrialEnrollment;

@interface CAARSchemaCAARModelExecuted : SISchemaInstrumentationMessage {
    struct { unsigned char isShadowLog : 1; } _has;
}

@property (retain, nonatomic) SISchemaAsset *asset;
@property (nonatomic) char hasAsset;
@property (nonatomic) char isShadowLog;
@property (nonatomic) char hasIsShadowLog;
@property (retain, nonatomic) CAARSchemaCAARModelOutput *modelOutput;
@property (nonatomic) char hasModelOutput;
@property (retain, nonatomic) CAARSchemaCAARTrialEnrollment *trialEnrollment;
@property (nonatomic) char hasTrialEnrollment;
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
- (void)deleteAsset;
- (void)deleteIsShadowLog;
- (void)deleteModelOutput;
- (void)deleteTrialEnrollment;
- (id)suppressMessageUnderConditions;

@end
