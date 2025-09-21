@class MTSchemaMTAppInvocationMetadata, NSData, SISchemaUUID, MTSchemaMTApiInvocationMetadata;

@interface MTSchemaMTInvocationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char isOnDeviceTranslation : 1; unsigned char mobileAssetConfigVersion : 1; unsigned char task : 1; unsigned char inputSource : 1; unsigned char isExplicitLanguageFilterEnabled : 1; unsigned char isLanguageIdentificationEnabled : 1; unsigned char displayMode : 1; unsigned char invocationType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (nonatomic) char isOnDeviceTranslation;
@property (nonatomic) char hasIsOnDeviceTranslation;
@property (nonatomic) unsigned int mobileAssetConfigVersion;
@property (nonatomic) char hasMobileAssetConfigVersion;
@property (nonatomic) int task;
@property (nonatomic) char hasTask;
@property (nonatomic) int inputSource;
@property (nonatomic) char hasInputSource;
@property (nonatomic) char isExplicitLanguageFilterEnabled;
@property (nonatomic) char hasIsExplicitLanguageFilterEnabled;
@property (nonatomic) char isLanguageIdentificationEnabled;
@property (nonatomic) char hasIsLanguageIdentificationEnabled;
@property (nonatomic) int displayMode;
@property (nonatomic) char hasDisplayMode;
@property (retain, nonatomic) SISchemaUUID *qssSessionId;
@property (nonatomic) char hasQssSessionId;
@property (nonatomic) int invocationType;
@property (nonatomic) char hasInvocationType;
@property (retain, nonatomic) MTSchemaMTAppInvocationMetadata *appInvocationMetadata;
@property (nonatomic) char hasAppInvocationMetadata;
@property (retain, nonatomic) MTSchemaMTApiInvocationMetadata *apiInvocationMetadata;
@property (nonatomic) char hasApiInvocationMetadata;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichInvocationmetadata;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteApiInvocationMetadata;
- (void)deleteAppInvocationMetadata;
- (void)deleteDisplayMode;
- (void)deleteInputSource;
- (void)deleteInvocationType;
- (void)deleteIsExplicitLanguageFilterEnabled;
- (void)deleteIsLanguageIdentificationEnabled;
- (void)deleteIsOnDeviceTranslation;
- (void)deleteLinkId;
- (void)deleteMobileAssetConfigVersion;
- (void)deleteQssSessionId;
- (void)deleteTask;
- (id)suppressMessageUnderConditions;

@end
