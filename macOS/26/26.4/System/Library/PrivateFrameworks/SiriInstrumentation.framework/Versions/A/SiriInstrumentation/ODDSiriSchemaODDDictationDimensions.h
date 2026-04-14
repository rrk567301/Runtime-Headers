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
- (void)deleteAsrLocation;
- (void)deleteAudioInterfaceProductId;
- (void)deleteAudioInterfaceVendorId;
- (void)deleteDataSharingOptInStatus;
- (void)deleteDictationLocale;
- (void)deleteInvocationSource;
- (void)deleteSystemBuild;
- (void)deleteViewInterface;

@end
