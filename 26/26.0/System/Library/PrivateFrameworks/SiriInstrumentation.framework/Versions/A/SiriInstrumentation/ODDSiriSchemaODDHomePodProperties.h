@class ODDSiriSchemaODDAdaptiveVolumeProperties, NSData;

@interface ODDSiriSchemaODDHomePodProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isPersonalDomainsEnabled : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDAdaptiveVolumeProperties *adaptiveVolume;
@property (nonatomic) BOOL hasAdaptiveVolume;
@property (nonatomic) BOOL isPersonalDomainsEnabled;
@property (nonatomic) BOOL hasIsPersonalDomainsEnabled;
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
- (void)deleteAdaptiveVolume;
- (void)deleteIsPersonalDomainsEnabled;

@end
