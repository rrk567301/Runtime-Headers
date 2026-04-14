@class NSData;

@interface SISchemaUEIDictationDiscoveryToolTipShown : SISchemaInstrumentationMessage {
    struct { unsigned char toolTipShown : 1; unsigned char hasEmoji : 1; } _has;
}

@property (nonatomic) int toolTipShown;
@property (nonatomic) BOOL hasToolTipShown;
@property (nonatomic) BOOL hasEmoji;
@property (nonatomic) BOOL hasHasEmoji;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteHasEmoji;
- (void)deleteToolTipShown;

@end
