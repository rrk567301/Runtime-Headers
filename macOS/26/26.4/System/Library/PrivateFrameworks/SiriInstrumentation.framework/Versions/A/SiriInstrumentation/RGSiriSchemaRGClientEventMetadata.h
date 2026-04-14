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

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIfRequestId;
- (void)deletePostingSpanId;
- (void)deleteRgId;

@end
