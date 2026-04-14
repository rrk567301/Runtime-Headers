@class NSData, POMMESSchemaPOMMESOnDeviceMetadata;

@interface POMMESSchemaPOMMESClientConversationMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char hasPromptContext : 1; unsigned char hasDisplayHints : 1; } _has;
}

@property (nonatomic) BOOL hasPromptContext;
@property (nonatomic) BOOL hasHasPromptContext;
@property (nonatomic) BOOL hasDisplayHints;
@property (nonatomic) BOOL hasHasDisplayHints;
@property (retain, nonatomic) POMMESSchemaPOMMESOnDeviceMetadata *onDeviceMetadata;
@property (nonatomic) BOOL hasOnDeviceMetadata;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHasDisplayHints;
- (void)deleteHasPromptContext;
- (void)deleteOnDeviceMetadata;

@end
