@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSKGQAReference : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *pipeline;
@property (nonatomic) BOOL hasPipeline;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deletePipeline;

@end
