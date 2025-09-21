@class NSData;

@interface ODDSiriSchemaODDiOSGeneralProperties : SISchemaInstrumentationMessage {
    struct { unsigned char hasPairedAppleWatch : 1; unsigned char hasTvOSDeviceInHome : 1; } _has;
}

@property (nonatomic) char hasPairedAppleWatch;
@property (nonatomic) char hasHasPairedAppleWatch;
@property (nonatomic) char hasTvOSDeviceInHome;
@property (nonatomic) char hasHasTvOSDeviceInHome;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHasPairedAppleWatch;
- (void)deleteHasTvOSDeviceInHome;
- (id)suppressMessageUnderConditions;

@end
