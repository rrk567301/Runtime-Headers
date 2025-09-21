@class NSData;

@interface CNVSchemaCNVIntentFinalExecutionStarted : SISchemaInstrumentationMessage {
    struct { unsigned char plugin : 1; unsigned char stackDepth : 1; } _has;
}

@property (nonatomic) int plugin;
@property (nonatomic) char hasPlugin;
@property (nonatomic) unsigned int stackDepth;
@property (nonatomic) char hasStackDepth;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePlugin;
- (void)deleteStackDepth;
- (id)suppressMessageUnderConditions;

@end
