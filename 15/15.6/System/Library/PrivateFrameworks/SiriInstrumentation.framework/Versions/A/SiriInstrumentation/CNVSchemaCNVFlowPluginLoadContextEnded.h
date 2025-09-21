@class NSData;

@interface CNVSchemaCNVFlowPluginLoadContextEnded : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char hasPluginCached : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
@property (nonatomic) char hasPluginCached;
@property (nonatomic) char hasHasPluginCached;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExists;
- (void)deleteHasPluginCached;
- (id)suppressMessageUnderConditions;

@end
