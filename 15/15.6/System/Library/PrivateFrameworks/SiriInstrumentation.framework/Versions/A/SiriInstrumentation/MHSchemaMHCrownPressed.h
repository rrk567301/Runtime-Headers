@class NSData;

@interface MHSchemaMHCrownPressed : SISchemaInstrumentationMessage {
    struct { unsigned char isAlwaysOnMicAudioUsed : 1; } _has;
}

@property (nonatomic) char isAlwaysOnMicAudioUsed;
@property (nonatomic) char hasIsAlwaysOnMicAudioUsed;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsAlwaysOnMicAudioUsed;
- (id)suppressMessageUnderConditions;

@end
