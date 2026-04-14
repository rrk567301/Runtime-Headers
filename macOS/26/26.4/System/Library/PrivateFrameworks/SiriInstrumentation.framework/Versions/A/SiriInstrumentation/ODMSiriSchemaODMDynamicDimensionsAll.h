@class SISchemaISOLocale, NSData;

@interface ODMSiriSchemaODMDynamicDimensionsAll : SISchemaInstrumentationMessage {
    struct { unsigned char viewMode : 1; unsigned char audioInterface : 1; unsigned char product : 1; unsigned char siriAsrLocation : 1; unsigned char siriNlLocation : 1; unsigned char siriDataSharingOptInStatus : 1; } _has;
}

@property (retain, nonatomic) SISchemaISOLocale *siriInputLocale;
@property (nonatomic) BOOL hasSiriInputLocale;
@property (nonatomic) int viewMode;
@property (nonatomic) BOOL hasViewMode;
@property (nonatomic) int audioInterface;
@property (nonatomic) BOOL hasAudioInterface;
@property (nonatomic) int product;
@property (nonatomic) BOOL hasProduct;
@property (nonatomic) int siriAsrLocation;
@property (nonatomic) BOOL hasSiriAsrLocation;
@property (nonatomic) int siriNlLocation;
@property (nonatomic) BOOL hasSiriNlLocation;
@property (nonatomic) int siriDataSharingOptInStatus;
@property (nonatomic) BOOL hasSiriDataSharingOptInStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAudioInterface;
- (void)deleteProduct;
- (void)deleteSiriAsrLocation;
- (void)deleteSiriDataSharingOptInStatus;
- (void)deleteSiriInputLocale;
- (void)deleteSiriNlLocation;
- (void)deleteViewMode;

@end
