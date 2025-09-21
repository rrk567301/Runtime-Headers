@class NSData;

@interface INFERENCESchemaINFERENCECommonAppIndependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char rawLanguage : 1; unsigned char rawLocale : 1; unsigned char rawStateOrProvince : 1; unsigned char rawCountry : 1; unsigned char rawRequestDeviceCategory : 1; unsigned char clientDayOfWeek : 1; unsigned char rawClientHourOfDay : 1; unsigned char isClientDaylight : 1; unsigned char appResolutionType : 1; unsigned char sirikitResponseCode : 1; unsigned char appSelectionUses : 1; unsigned char modelVersion : 1; } _has;
}

@property (nonatomic) long long rawLanguage;
@property (nonatomic) char hasRawLanguage;
@property (nonatomic) long long rawLocale;
@property (nonatomic) char hasRawLocale;
@property (nonatomic) long long rawStateOrProvince;
@property (nonatomic) char hasRawStateOrProvince;
@property (nonatomic) long long rawCountry;
@property (nonatomic) char hasRawCountry;
@property (nonatomic) long long rawRequestDeviceCategory;
@property (nonatomic) char hasRawRequestDeviceCategory;
@property (nonatomic) int clientDayOfWeek;
@property (nonatomic) char hasClientDayOfWeek;
@property (nonatomic) int rawClientHourOfDay;
@property (nonatomic) char hasRawClientHourOfDay;
@property (nonatomic) char isClientDaylight;
@property (nonatomic) char hasIsClientDaylight;
@property (nonatomic) int appResolutionType;
@property (nonatomic) char hasAppResolutionType;
@property (nonatomic) int sirikitResponseCode;
@property (nonatomic) char hasSirikitResponseCode;
@property (nonatomic) int appSelectionUses;
@property (nonatomic) char hasAppSelectionUses;
@property (nonatomic) unsigned int modelVersion;
@property (nonatomic) char hasModelVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRawLocale;
- (void)deleteAppResolutionType;
- (void)deleteAppSelectionUses;
- (void)deleteClientDayOfWeek;
- (void)deleteIsClientDaylight;
- (void)deleteModelVersion;
- (void)deleteRawClientHourOfDay;
- (void)deleteRawCountry;
- (void)deleteRawLanguage;
- (void)deleteRawRequestDeviceCategory;
- (void)deleteRawStateOrProvince;
- (void)deleteSirikitResponseCode;
- (id)suppressMessageUnderConditions;

@end
