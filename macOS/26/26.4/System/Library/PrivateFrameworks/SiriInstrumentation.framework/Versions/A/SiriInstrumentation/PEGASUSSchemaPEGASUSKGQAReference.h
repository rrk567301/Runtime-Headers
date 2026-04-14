@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSKGQAReference : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *pipeline;
@property (nonatomic) BOOL hasPipeline;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePipeline;

@end
