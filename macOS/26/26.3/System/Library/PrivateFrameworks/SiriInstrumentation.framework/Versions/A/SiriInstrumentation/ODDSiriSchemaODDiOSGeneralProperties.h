@class NSData;

@interface ODDSiriSchemaODDiOSGeneralProperties : SISchemaInstrumentationMessage {
    struct { unsigned char hasPairedAppleWatch : 1; unsigned char hasTvOSDeviceInHome : 1; } _has;
}

@property (nonatomic) BOOL hasPairedAppleWatch;
@property (nonatomic) BOOL hasHasPairedAppleWatch;
@property (nonatomic) BOOL hasTvOSDeviceInHome;
@property (nonatomic) BOOL hasHasTvOSDeviceInHome;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteHasPairedAppleWatch;
- (void)deleteHasTvOSDeviceInHome;

@end
