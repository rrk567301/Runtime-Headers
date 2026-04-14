@class CAARSchemaCAARModelOutput, SISchemaAsset, NSData, CAARSchemaCAARTrialEnrollment;

@interface CAARSchemaCAARModelExecuted : SISchemaInstrumentationMessage {
    struct { unsigned char isShadowLog : 1; } _has;
}

@property (retain, nonatomic) SISchemaAsset *asset;
@property (nonatomic) BOOL hasAsset;
@property (nonatomic) BOOL isShadowLog;
@property (nonatomic) BOOL hasIsShadowLog;
@property (retain, nonatomic) CAARSchemaCAARModelOutput *modelOutput;
@property (nonatomic) BOOL hasModelOutput;
@property (retain, nonatomic) CAARSchemaCAARTrialEnrollment *trialEnrollment;
@property (nonatomic) BOOL hasTrialEnrollment;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAsset;
- (void)deleteIsShadowLog;
- (void)deleteModelOutput;
- (void)deleteTrialEnrollment;

@end
