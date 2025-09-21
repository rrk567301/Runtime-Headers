@class SISchemaISOLocale, NSData;

@interface ODMSiriSchemaODMDynamicDimensionsAll : SISchemaInstrumentationMessage {
    struct { unsigned char viewMode : 1; unsigned char audioInterface : 1; unsigned char product : 1; unsigned char siriAsrLocation : 1; unsigned char siriNlLocation : 1; unsigned char siriDataSharingOptInStatus : 1; } _has;
}

@property (retain, nonatomic) SISchemaISOLocale *siriInputLocale;
@property (nonatomic) char hasSiriInputLocale;
@property (nonatomic) int viewMode;
@property (nonatomic) char hasViewMode;
@property (nonatomic) int audioInterface;
@property (nonatomic) char hasAudioInterface;
@property (nonatomic) int product;
@property (nonatomic) char hasProduct;
@property (nonatomic) int siriAsrLocation;
@property (nonatomic) char hasSiriAsrLocation;
@property (nonatomic) int siriNlLocation;
@property (nonatomic) char hasSiriNlLocation;
@property (nonatomic) int siriDataSharingOptInStatus;
@property (nonatomic) char hasSiriDataSharingOptInStatus;
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
- (void)deleteAudioInterface;
- (void)deleteProduct;
- (void)deleteSiriAsrLocation;
- (void)deleteSiriDataSharingOptInStatus;
- (void)deleteSiriInputLocale;
- (void)deleteSiriNlLocation;
- (void)deleteViewMode;
- (id)suppressMessageUnderConditions;

@end
