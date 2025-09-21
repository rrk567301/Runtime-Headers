@class NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingAppIndependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char requestOriginLocale : 1; unsigned char requestOriginLanguage : 1; unsigned char communicationType : 1; unsigned char appResolutionType : 1; unsigned char userPersona : 1; } _has;
}

@property (nonatomic) long long requestOriginLocale;
@property (nonatomic) char hasRequestOriginLocale;
@property (nonatomic) long long requestOriginLanguage;
@property (nonatomic) char hasRequestOriginLanguage;
@property (nonatomic) long long communicationType;
@property (nonatomic) char hasCommunicationType;
@property (nonatomic) int appResolutionType;
@property (nonatomic) char hasAppResolutionType;
@property (nonatomic) int userPersona;
@property (nonatomic) char hasUserPersona;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAppResolutionType;
- (void)deleteCommunicationType;
- (void)deleteRequestOriginLanguage;
- (void)deleteRequestOriginLocale;
- (void)deleteUserPersona;
- (id)suppressMessageUnderConditions;

@end
