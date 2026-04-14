@class ODDSiriSchemaODDAdaptiveVolumeProperties, NSData;

@interface ODDSiriSchemaODDHomePodProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isPersonalDomainsEnabled : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDAdaptiveVolumeProperties *adaptiveVolume;
@property (nonatomic) BOOL hasAdaptiveVolume;
@property (nonatomic) BOOL isPersonalDomainsEnabled;
@property (nonatomic) BOOL hasIsPersonalDomainsEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAdaptiveVolume;
- (void)deleteIsPersonalDomainsEnabled;

@end
