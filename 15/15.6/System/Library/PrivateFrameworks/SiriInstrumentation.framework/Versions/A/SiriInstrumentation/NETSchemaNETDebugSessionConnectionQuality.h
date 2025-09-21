@class NSData;

@interface NETSchemaNETDebugSessionConnectionQuality : SISchemaInstrumentationMessage {
    struct { unsigned char symptomsCellularHistorical : 1; unsigned char symptomsCellularInstant : 1; unsigned char symptomsWiFiHistorical : 1; unsigned char symptomsWiFiInstant : 1; } _has;
}

@property (nonatomic) int symptomsCellularHistorical;
@property (nonatomic) char hasSymptomsCellularHistorical;
@property (nonatomic) int symptomsCellularInstant;
@property (nonatomic) char hasSymptomsCellularInstant;
@property (nonatomic) int symptomsWiFiHistorical;
@property (nonatomic) char hasSymptomsWiFiHistorical;
@property (nonatomic) int symptomsWiFiInstant;
@property (nonatomic) char hasSymptomsWiFiInstant;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSymptomsCellularHistorical;
- (void)deleteSymptomsCellularInstant;
- (void)deleteSymptomsWiFiHistorical;
- (void)deleteSymptomsWiFiInstant;
- (id)suppressMessageUnderConditions;

@end
