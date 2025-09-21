@class NSString, LTSchemaError, NSData, LTSchemaTask;

@interface LTSchemaSpeechTranslationEvent : SISchemaInstrumentationMessage {
    struct { unsigned char inRestrictedMode : 1; unsigned char isAutomaticLID : 1; unsigned char uiMode : 1; unsigned char timeToFirstPartialDisplayed : 1; unsigned char timeToRecordingDialogDismissed : 1; unsigned char timeToShowTranslationCard : 1; unsigned char timeToCancel : 1; unsigned char status : 1; } _has;
}

@property (retain, nonatomic) LTSchemaTask *task;
@property (nonatomic) char hasTask;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) char hasSessionID;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) char hasRequestID;
@property (nonatomic) char inRestrictedMode;
@property (nonatomic) char hasInRestrictedMode;
@property (nonatomic) char isAutomaticLID;
@property (nonatomic) char hasIsAutomaticLID;
@property (retain, nonatomic) LTSchemaError *error;
@property (nonatomic) char hasError;
@property (nonatomic) int uiMode;
@property (nonatomic) char hasUiMode;
@property (copy, nonatomic) NSString *mobileAssetConfigVersion;
@property (nonatomic) char hasMobileAssetConfigVersion;
@property (nonatomic) unsigned int timeToFirstPartialDisplayed;
@property (nonatomic) char hasTimeToFirstPartialDisplayed;
@property (nonatomic) unsigned int timeToRecordingDialogDismissed;
@property (nonatomic) char hasTimeToRecordingDialogDismissed;
@property (nonatomic) unsigned int timeToShowTranslationCard;
@property (nonatomic) char hasTimeToShowTranslationCard;
@property (nonatomic) unsigned int timeToCancel;
@property (nonatomic) char hasTimeToCancel;
@property (nonatomic) int status;
@property (nonatomic) char hasStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSessionID;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteRequestID;
- (void)deleteTimeToShowTranslationCard;
- (void)deleteError;
- (void)deleteInRestrictedMode;
- (void)deleteIsAutomaticLID;
- (void)deleteMobileAssetConfigVersion;
- (void)deleteStatus;
- (void)deleteTask;
- (void)deleteTimeToCancel;
- (void)deleteTimeToFirstPartialDisplayed;
- (void)deleteTimeToRecordingDialogDismissed;
- (void)deleteUiMode;
- (id)suppressMessageUnderConditions;

@end
