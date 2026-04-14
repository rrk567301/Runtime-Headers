@class NSArray, NSData;

@interface GATSchemaGATRichFormatResponseMetadataCaptured : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *responseSegments;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addResponseSegments:(id)a0;
- (void)clearResponseSegments;
- (void)deleteResponseSegments;
- (id)responseSegmentsAtIndex:(unsigned long long)a0;
- (unsigned long long)responseSegmentsCount;

@end
