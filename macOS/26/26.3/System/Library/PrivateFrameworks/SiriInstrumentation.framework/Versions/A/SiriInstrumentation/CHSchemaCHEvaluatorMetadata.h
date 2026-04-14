@class NSString, NSData;

@interface CHSchemaCHEvaluatorMetadata : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *dynamicEvaluatorTaskName;
@property (nonatomic) BOOL hasDynamicEvaluatorTaskName;
@property (copy, nonatomic) NSString *promptVersion;
@property (nonatomic) BOOL hasPromptVersion;
@property (copy, nonatomic) NSString *promptIdentifier;
@property (nonatomic) BOOL hasPromptIdentifier;
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
- (void)deleteDynamicEvaluatorTaskName;
- (void)deletePromptIdentifier;
- (void)deletePromptVersion;

@end
