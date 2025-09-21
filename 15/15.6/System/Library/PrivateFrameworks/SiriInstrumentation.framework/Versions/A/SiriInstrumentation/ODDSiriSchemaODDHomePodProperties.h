@class ODDSiriSchemaODDAdaptiveVolumeProperties, NSData;

@interface ODDSiriSchemaODDHomePodProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isPersonalDomainsEnabled : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDAdaptiveVolumeProperties *adaptiveVolume;
@property (nonatomic) char hasAdaptiveVolume;
@property (nonatomic) char isPersonalDomainsEnabled;
@property (nonatomic) char hasIsPersonalDomainsEnabled;
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
- (void)deleteAdaptiveVolume;
- (void)deleteIsPersonalDomainsEnabled;
- (id)suppressMessageUnderConditions;

@end
