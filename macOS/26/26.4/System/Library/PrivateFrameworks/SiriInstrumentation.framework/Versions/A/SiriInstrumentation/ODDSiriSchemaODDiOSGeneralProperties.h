@class NSData;

@interface ODDSiriSchemaODDiOSGeneralProperties : SISchemaInstrumentationMessage {
    struct { unsigned char hasPairedAppleWatch : 1; unsigned char hasTvOSDeviceInHome : 1; } _has;
}

@property (nonatomic) BOOL hasPairedAppleWatch;
@property (nonatomic) BOOL hasHasPairedAppleWatch;
@property (nonatomic) BOOL hasTvOSDeviceInHome;
@property (nonatomic) BOOL hasHasTvOSDeviceInHome;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHasPairedAppleWatch;
- (void)deleteHasTvOSDeviceInHome;

@end
