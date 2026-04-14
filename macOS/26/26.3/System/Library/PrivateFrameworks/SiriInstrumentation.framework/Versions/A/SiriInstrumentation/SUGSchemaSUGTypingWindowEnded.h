@class NSData;

@interface SUGSchemaSUGTypingWindowEnded : SISchemaInstrumentationMessage {
    struct { unsigned char typingWindowEndReason : 1; } _has;
}

@property (nonatomic) int typingWindowEndReason;
@property (nonatomic) BOOL hasTypingWindowEndReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteTypingWindowEndReason;

@end
