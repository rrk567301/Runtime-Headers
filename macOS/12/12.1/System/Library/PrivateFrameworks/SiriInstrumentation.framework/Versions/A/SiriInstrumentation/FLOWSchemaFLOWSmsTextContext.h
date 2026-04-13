@class FLOWSchemaFLOWSmsAttachmentMetadata, NSData, FLOWSchemaFLOWSmsTextContentMetadata;

@interface FLOWSchemaFLOWSmsTextContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWSchemaFLOWSmsTextContentMetadata *smsTextContentMetadata;
@property (nonatomic) BOOL hasSmsTextContentMetadata;
@property (retain, nonatomic) FLOWSchemaFLOWSmsAttachmentMetadata *smsAttachmentMetadata;
@property (nonatomic) BOOL hasSmsAttachmentMetadata;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
