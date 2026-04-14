@class NSString, NSData, SISchemaUUID;

@interface DonationSchemaSDSpeechDonationEventMetaData : SISchemaInstrumentationMessage {
    struct { unsigned char deviceType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *sdId;
@property (nonatomic) BOOL hasSdId;
@property (nonatomic) int deviceType;
@property (nonatomic) BOOL hasDeviceType;
@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) BOOL hasSystemBuild;
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
- (void)deleteDeviceType;
- (void)deleteSdId;
- (void)deleteSystemBuild;

@end
