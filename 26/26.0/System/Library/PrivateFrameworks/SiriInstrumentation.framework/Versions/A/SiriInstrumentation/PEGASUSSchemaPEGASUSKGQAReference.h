@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSKGQAReference : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *pipeline;
@property (nonatomic) BOOL hasPipeline;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deletePipeline;

@end
