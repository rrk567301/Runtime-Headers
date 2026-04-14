@class NSArray, NSData;

@interface GATSchemaGATRichFormatResponseMetadataCaptured : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *responseSegments;
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
- (void)addResponseSegments:(id)a0;
- (void)clearResponseSegments;
- (void)deleteResponseSegments;
- (id)responseSegmentsAtIndex:(unsigned long long)a0;
- (unsigned long long)responseSegmentsCount;

@end
