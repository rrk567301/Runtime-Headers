@class NSData, SISchemaUUID;

@interface RGSiriSchemaRGClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char postingSpanId : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *ifRequestId;
@property (nonatomic) char hasIfRequestId;
@property (nonatomic) unsigned long long postingSpanId;
@property (nonatomic) char hasPostingSpanId;
@property (retain, nonatomic) SISchemaUUID *rgId;
@property (nonatomic) char hasRgId;
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
- (void)deleteIfRequestId;
- (void)deletePostingSpanId;
- (void)deleteRgId;
- (id)suppressMessageUnderConditions;

@end
