@class NSData;

@interface SUGSchemaSUGTypingWindowEnded : SISchemaInstrumentationMessage {
    struct { unsigned char typingWindowEndReason : 1; } _has;
}

@property (nonatomic) int typingWindowEndReason;
@property (nonatomic) char hasTypingWindowEndReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTypingWindowEndReason;
- (id)suppressMessageUnderConditions;

@end
