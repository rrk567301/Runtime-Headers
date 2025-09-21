@class NSData;

@interface ODDSiriSchemaODDAdaptiveVolumeProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isAdaptiveVolumeEnabled : 1; unsigned char adaptiveVolume : 1; unsigned char isPermanentOffsetEnabled : 1; unsigned char permanentOffsetFactor : 1; } _has;
}

@property (nonatomic) char isAdaptiveVolumeEnabled;
@property (nonatomic) char hasIsAdaptiveVolumeEnabled;
@property (nonatomic) int adaptiveVolume;
@property (nonatomic) char hasAdaptiveVolume;
@property (nonatomic) char isPermanentOffsetEnabled;
@property (nonatomic) char hasIsPermanentOffsetEnabled;
@property (nonatomic) float permanentOffsetFactor;
@property (nonatomic) char hasPermanentOffsetFactor;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAdaptiveVolume;
- (void)deleteIsAdaptiveVolumeEnabled;
- (void)deleteIsPermanentOffsetEnabled;
- (void)deletePermanentOffsetFactor;
- (id)suppressMessageUnderConditions;

@end
