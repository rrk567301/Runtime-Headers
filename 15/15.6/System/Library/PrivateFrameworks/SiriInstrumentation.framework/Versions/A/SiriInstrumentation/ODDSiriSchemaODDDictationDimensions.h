@class NSString, SISchemaISOLocale, NSData;

@interface ODDSiriSchemaODDDictationDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char dataSharingOptInStatus : 1; unsigned char viewInterface : 1; unsigned char asrLocation : 1; } _has;
}

@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) char hasSystemBuild;
@property (nonatomic) int dataSharingOptInStatus;
@property (nonatomic) char hasDataSharingOptInStatus;
@property (nonatomic) int viewInterface;
@property (nonatomic) char hasViewInterface;
@property (copy, nonatomic) NSString *audioInterfaceVendorId;
@property (nonatomic) char hasAudioInterfaceVendorId;
@property (copy, nonatomic) NSString *audioInterfaceProductId;
@property (nonatomic) char hasAudioInterfaceProductId;
@property (nonatomic) int asrLocation;
@property (nonatomic) char hasAsrLocation;
@property (retain, nonatomic) SISchemaISOLocale *dictationLocale;
@property (nonatomic) char hasDictationLocale;
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
- (void)deleteAsrLocation;
- (void)deleteAudioInterfaceProductId;
- (void)deleteAudioInterfaceVendorId;
- (void)deleteDataSharingOptInStatus;
- (void)deleteDictationLocale;
- (void)deleteSystemBuild;
- (void)deleteViewInterface;
- (id)suppressMessageUnderConditions;

@end
