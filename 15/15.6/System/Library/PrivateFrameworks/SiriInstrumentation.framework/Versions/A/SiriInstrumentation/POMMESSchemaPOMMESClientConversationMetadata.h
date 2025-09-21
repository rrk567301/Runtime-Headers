@class NSData, POMMESSchemaPOMMESOnDeviceMetadata;

@interface POMMESSchemaPOMMESClientConversationMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char hasPromptContext : 1; unsigned char hasDisplayHints : 1; } _has;
}

@property (nonatomic) char hasPromptContext;
@property (nonatomic) char hasHasPromptContext;
@property (nonatomic) char hasDisplayHints;
@property (nonatomic) char hasHasDisplayHints;
@property (retain, nonatomic) POMMESSchemaPOMMESOnDeviceMetadata *onDeviceMetadata;
@property (nonatomic) char hasOnDeviceMetadata;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteHasDisplayHints;
- (void)deleteHasPromptContext;
- (void)deleteOnDeviceMetadata;
- (id)suppressMessageUnderConditions;

@end
