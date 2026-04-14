@class NSData, SISchemaUUID;

@interface RGSiriSchemaRGClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char postingSpanId : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *ifRequestId;
@property (nonatomic) BOOL hasIfRequestId;
@property (nonatomic) unsigned long long postingSpanId;
@property (nonatomic) BOOL hasPostingSpanId;
@property (retain, nonatomic) SISchemaUUID *rgId;
@property (nonatomic) BOOL hasRgId;
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
- (void)deleteIfRequestId;
- (void)deletePostingSpanId;
- (void)deleteRgId;

@end
