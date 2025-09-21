@class NSData, SISchemaUUID;

@interface IFPlatformSchemaIFPlatformClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char postingSpanId : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *ifSessionId;
@property (nonatomic) BOOL hasIfSessionId;
@property (nonatomic) unsigned long long postingSpanId;
@property (nonatomic) BOOL hasPostingSpanId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteIfSessionId;
- (void)deletePostingSpanId;

@end
