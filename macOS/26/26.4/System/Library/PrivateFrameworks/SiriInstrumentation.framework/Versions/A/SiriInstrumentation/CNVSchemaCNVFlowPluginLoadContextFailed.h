@class NSData;

@interface CNVSchemaCNVFlowPluginLoadContextFailed : SISchemaInstrumentationMessage {
    struct { unsigned char errorCode : 1; unsigned char hasPluginCached : 1; } _has;
}

@property (nonatomic) unsigned int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasPluginCached;
@property (nonatomic) BOOL hasHasPluginCached;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorCode;
- (void)deleteHasPluginCached;

@end
