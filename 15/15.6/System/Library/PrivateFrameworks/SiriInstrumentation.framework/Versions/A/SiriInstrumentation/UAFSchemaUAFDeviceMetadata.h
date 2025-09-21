@class NSString, NSData, SISchemaUUID;

@interface UAFSchemaUAFDeviceMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char programCode : 1; unsigned char inputLocale : 1; unsigned char nanoSecondsSinceLastBoot : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *deviceId;
@property (nonatomic) char hasDeviceId;
@property (copy, nonatomic) NSString *deviceType;
@property (nonatomic) char hasDeviceType;
@property (nonatomic) int programCode;
@property (nonatomic) char hasProgramCode;
@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) char hasSystemBuild;
@property (nonatomic) int inputLocale;
@property (nonatomic) char hasInputLocale;
@property (nonatomic) unsigned long long nanoSecondsSinceLastBoot;
@property (nonatomic) char hasNanoSecondsSinceLastBoot;
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
- (void)deleteDeviceId;
- (void)deleteDeviceType;
- (void)deleteInputLocale;
- (void)deleteNanoSecondsSinceLastBoot;
- (void)deleteProgramCode;
- (void)deleteSystemBuild;
- (id)suppressMessageUnderConditions;

@end
