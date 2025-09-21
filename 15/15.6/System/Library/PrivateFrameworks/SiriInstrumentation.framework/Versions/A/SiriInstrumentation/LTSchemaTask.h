@class NSString, NSData;

@interface LTSchemaTask : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *translationTask;
@property (nonatomic) char hasTranslationTask;
@property (copy, nonatomic) NSString *sourceLanguage;
@property (nonatomic) char hasSourceLanguage;
@property (copy, nonatomic) NSString *targetLanguage;
@property (nonatomic) char hasTargetLanguage;
@property (copy, nonatomic) NSString *deviceOS;
@property (nonatomic) char hasDeviceOS;
@property (copy, nonatomic) NSString *deviceType;
@property (nonatomic) char hasDeviceType;
@property (copy, nonatomic) NSString *osVersion;
@property (nonatomic) char hasOsVersion;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) char hasBundleIdentifier;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteOsVersion;
- (void)deleteBundleIdentifier;
- (void)deleteDeviceOS;
- (void)deleteDeviceType;
- (void)deleteSourceLanguage;
- (void)deleteTargetLanguage;
- (void)deleteTranslationTask;
- (id)suppressMessageUnderConditions;

@end
