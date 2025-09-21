@class NSData;

@interface CNVSchemaCNVFlowPluginLoadContextFailed : SISchemaInstrumentationMessage {
    struct { unsigned char errorCode : 1; unsigned char hasPluginCached : 1; } _has;
}

@property (nonatomic) unsigned int errorCode;
@property (nonatomic) char hasErrorCode;
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
- (void)deleteErrorCode;
- (void)deleteHasPluginCached;
- (id)suppressMessageUnderConditions;

@end
