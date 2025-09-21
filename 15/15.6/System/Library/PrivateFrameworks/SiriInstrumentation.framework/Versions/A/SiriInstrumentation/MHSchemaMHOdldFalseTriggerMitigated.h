@class NSString, NSData, SISchemaUUID;

@interface MHSchemaMHOdldFalseTriggerMitigated : SISchemaInstrumentationMessage {
    struct { unsigned char odldScore : 1; unsigned char odldScoreThreshold : 1; unsigned char errorCode : 1; unsigned char anchorSocialScore : 1; unsigned char socialScore : 1; unsigned char conversationalOdldScore : 1; } _has;
}

@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) char hasModelVersion;
@property (nonatomic) float odldScore;
@property (nonatomic) char hasOdldScore;
@property (nonatomic) float odldScoreThreshold;
@property (nonatomic) char hasOdldScoreThreshold;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) char hasErrorMessage;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) char hasErrorCode;
@property (retain, nonatomic) SISchemaUUID *anchorRequestId;
@property (nonatomic) char hasAnchorRequestId;
@property (retain, nonatomic) SISchemaUUID *previousRequestId;
@property (nonatomic) char hasPreviousRequestId;
@property (nonatomic) float anchorSocialScore;
@property (nonatomic) char hasAnchorSocialScore;
@property (nonatomic) float socialScore;
@property (nonatomic) char hasSocialScore;
@property (nonatomic) float conversationalOdldScore;
@property (nonatomic) char hasConversationalOdldScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorCode;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteOdldScore;
- (void)deleteAnchorRequestId;
- (void)deleteAnchorSocialScore;
- (void)deleteConversationalOdldScore;
- (void)deleteErrorMessage;
- (void)deleteModelVersion;
- (void)deleteOdldScoreThreshold;
- (void)deletePreviousRequestId;
- (void)deleteSocialScore;
- (id)suppressMessageUnderConditions;

@end
