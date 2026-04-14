@class NSData;

@interface CNVSchemaCNVIntentFinalExecutionStarted : SISchemaInstrumentationMessage {
    struct { unsigned char plugin : 1; unsigned char stackDepth : 1; } _has;
}

@property (nonatomic) int plugin;
@property (nonatomic) BOOL hasPlugin;
@property (nonatomic) unsigned int stackDepth;
@property (nonatomic) BOOL hasStackDepth;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deletePlugin;
- (void)deleteStackDepth;

@end
