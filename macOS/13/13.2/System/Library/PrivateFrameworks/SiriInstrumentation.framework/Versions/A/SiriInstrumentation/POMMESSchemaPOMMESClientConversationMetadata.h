@class NSData;

@interface POMMESSchemaPOMMESClientConversationMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char hasPromptContext : 1; unsigned char hasDisplayHints : 1; } _has;
}

@property (nonatomic) BOOL hasPromptContext;
@property (nonatomic) BOOL hasHasPromptContext;
@property (nonatomic) BOOL hasDisplayHints;
@property (nonatomic) BOOL hasHasDisplayHints;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteHasPromptContext;
- (void)deleteHasDisplayHints;

@end
