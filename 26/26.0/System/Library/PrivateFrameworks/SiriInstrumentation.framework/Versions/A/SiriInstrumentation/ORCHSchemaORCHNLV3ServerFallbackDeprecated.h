@class NSData;

@interface ORCHSchemaORCHNLV3ServerFallbackDeprecated : SISchemaInstrumentationMessage {
    struct { unsigned char fallbackReason : 1; } _has;
}

@property (nonatomic) int fallbackReason;
@property (nonatomic) BOOL hasFallbackReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteFallbackReason;

@end
