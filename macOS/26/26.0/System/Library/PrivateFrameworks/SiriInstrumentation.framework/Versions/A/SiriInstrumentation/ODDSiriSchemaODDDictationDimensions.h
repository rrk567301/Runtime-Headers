@class NSString, SISchemaISOLocale, NSData;

@interface ODDSiriSchemaODDDictationDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char dataSharingOptInStatus : 1; unsigned char viewInterface : 1; unsigned char asrLocation : 1; unsigned char invocationSource : 1; } _has;
}

@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) BOOL hasSystemBuild;
@property (nonatomic) int dataSharingOptInStatus;
@property (nonatomic) BOOL hasDataSharingOptInStatus;
@property (nonatomic) int viewInterface;
@property (nonatomic) BOOL hasViewInterface;
@property (copy, nonatomic) NSString *audioInterfaceVendorId;
@property (nonatomic) BOOL hasAudioInterfaceVendorId;
@property (copy, nonatomic) NSString *audioInterfaceProductId;
@property (nonatomic) BOOL hasAudioInterfaceProductId;
@property (nonatomic) int asrLocation;
@property (nonatomic) BOOL hasAsrLocation;
@property (retain, nonatomic) SISchemaISOLocale *dictationLocale;
@property (nonatomic) BOOL hasDictationLocale;
@property (nonatomic) int invocationSource;
@property (nonatomic) BOOL hasInvocationSource;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteAsrLocation;
- (void)deleteAudioInterfaceProductId;
- (void)deleteAudioInterfaceVendorId;
- (void)deleteDataSharingOptInStatus;
- (void)deleteDictationLocale;
- (void)deleteInvocationSource;
- (void)deleteSystemBuild;
- (void)deleteViewInterface;

@end
