@class NSData;

@interface ORCHSchemaORCHNLV3ServerFallbackDeprecated : SISchemaInstrumentationMessage {
    struct { unsigned char fallbackReason : 1; } _has;
}

@property (nonatomic) int fallbackReason;
@property (nonatomic) BOOL hasFallbackReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteFallbackReason;

@end
