@class NSString, NSData, SISchemaUUID;

@interface MHSchemaMHOdldFalseTriggerMitigated : SISchemaInstrumentationMessage {
    struct { unsigned char odldScore : 1; unsigned char odldScoreThreshold : 1; unsigned char errorCode : 1; unsigned char anchorSocialScore : 1; } _has;
}

@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) float odldScore;
@property (nonatomic) BOOL hasOdldScore;
@property (nonatomic) float odldScoreThreshold;
@property (nonatomic) BOOL hasOdldScoreThreshold;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) BOOL hasErrorMessage;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (retain, nonatomic) SISchemaUUID *anchorRequestId;
@property (nonatomic) BOOL hasAnchorRequestId;
@property (retain, nonatomic) SISchemaUUID *previousRequestId;
@property (nonatomic) BOOL hasPreviousRequestId;
@property (nonatomic) float anchorSocialScore;
@property (nonatomic) BOOL hasAnchorSocialScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteOdldScore;
- (void)deleteErrorCode;
- (void)deleteAnchorRequestId;
- (void)deleteAnchorSocialScore;
- (void)deleteErrorMessage;
- (void)deleteModelVersion;
- (void)deleteOdldScoreThreshold;
- (void)deletePreviousRequestId;
- (id)suppressMessageUnderConditions;

@end
