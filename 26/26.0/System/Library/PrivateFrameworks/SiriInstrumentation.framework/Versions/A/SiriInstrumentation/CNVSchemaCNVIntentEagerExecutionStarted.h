@class NSData;

@interface CNVSchemaCNVIntentEagerExecutionStarted : SISchemaInstrumentationMessage {
    struct { unsigned char plugin : 1; } _has;
}

@property (nonatomic) int plugin;
@property (nonatomic) BOOL hasPlugin;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deletePlugin;

@end
