@class NSData;

@interface FLOWSchemaFLOWSmsAudioContext : SISchemaInstrumentationMessage {
    struct { unsigned char messageDurationMs : 1; } _has;
}

@property (nonatomic) unsigned int messageDurationMs;
@property (nonatomic) BOOL hasMessageDurationMs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteMessageDurationMs;

@end
