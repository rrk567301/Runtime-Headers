@class NSArray, NSString, NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingAppIndependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char requestOriginLocale : 1; unsigned char requestOriginLanguage : 1; unsigned char communicationType : 1; unsigned char appResolutionType : 1; unsigned char userPersona : 1; unsigned char isModelDisambiguation : 1; unsigned char isModelConfirmation : 1; } _has;
}

@property (nonatomic) long long requestOriginLocale;
@property (nonatomic) BOOL hasRequestOriginLocale;
@property (nonatomic) long long requestOriginLanguage;
@property (nonatomic) BOOL hasRequestOriginLanguage;
@property (nonatomic) long long communicationType;
@property (nonatomic) BOOL hasCommunicationType;
@property (nonatomic) int appResolutionType;
@property (nonatomic) BOOL hasAppResolutionType;
@property (nonatomic) int userPersona;
@property (nonatomic) BOOL hasUserPersona;
@property (copy, nonatomic) NSArray *modelSelectedOptions;
@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) BOOL isModelDisambiguation;
@property (nonatomic) BOOL hasIsModelDisambiguation;
@property (nonatomic) BOOL isModelConfirmation;
@property (nonatomic) BOOL hasIsModelConfirmation;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addModelSelectedOptions:(unsigned int)a0;
- (void)clearModelSelectedOptions;
- (void)deleteAppResolutionType;
- (void)deleteCommunicationType;
- (void)deleteIsModelConfirmation;
- (void)deleteIsModelDisambiguation;
- (void)deleteModelSelectedOptions;
- (void)deleteModelVersion;
- (void)deleteRequestOriginLanguage;
- (void)deleteRequestOriginLocale;
- (void)deleteUserPersona;
- (unsigned int)modelSelectedOptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)modelSelectedOptionsCount;

@end
