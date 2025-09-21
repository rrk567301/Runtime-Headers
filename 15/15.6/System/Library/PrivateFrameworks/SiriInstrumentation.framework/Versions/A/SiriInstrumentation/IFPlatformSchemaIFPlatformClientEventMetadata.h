@class NSData, SISchemaUUID;

@interface IFPlatformSchemaIFPlatformClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char postingSpanId : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *ifSessionId;
@property (nonatomic) char hasIfSessionId;
@property (nonatomic) unsigned long long postingSpanId;
@property (nonatomic) char hasPostingSpanId;
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
- (void)deleteIfSessionId;
- (void)deletePostingSpanId;
- (id)suppressMessageUnderConditions;

@end
