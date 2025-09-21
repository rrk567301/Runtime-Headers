@class NSString, NSData, SISchemaUUID;

@interface DonationSchemaSDSpeechDonationEventMetaData : SISchemaInstrumentationMessage {
    struct { unsigned char deviceType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *sdId;
@property (nonatomic) char hasSdId;
@property (nonatomic) int deviceType;
@property (nonatomic) char hasDeviceType;
@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) char hasSystemBuild;
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
- (void)deleteDeviceType;
- (void)deleteSdId;
- (void)deleteSystemBuild;
- (id)suppressMessageUnderConditions;

@end
