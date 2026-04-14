@class NSData;

@interface FLOWSchemaFLOWSmsAudioContext : SISchemaInstrumentationMessage {
    struct { unsigned char messageDurationMs : 1; } _has;
}

@property (nonatomic) unsigned int messageDurationMs;
@property (nonatomic) BOOL hasMessageDurationMs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteMessageDurationMs;

@end
