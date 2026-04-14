@class NSData;

@interface MHSchemaMHCrownPressed : SISchemaInstrumentationMessage {
    struct { unsigned char isAlwaysOnMicAudioUsed : 1; } _has;
}

@property (nonatomic) BOOL isAlwaysOnMicAudioUsed;
@property (nonatomic) BOOL hasIsAlwaysOnMicAudioUsed;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteIsAlwaysOnMicAudioUsed;

@end
