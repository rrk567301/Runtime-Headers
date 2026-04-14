@class NSData;

@interface CNVSchemaCNVFlowPluginInputEnded : SISchemaInstrumentationMessage {
    struct { unsigned char hasTopicChanged : 1; } _has;
}

@property (nonatomic) BOOL hasTopicChanged;
@property (nonatomic) BOOL hasHasTopicChanged;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteHasTopicChanged;

@end
