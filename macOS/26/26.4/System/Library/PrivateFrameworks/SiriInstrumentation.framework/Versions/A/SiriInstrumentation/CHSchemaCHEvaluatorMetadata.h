@class NSString, NSData;

@interface CHSchemaCHEvaluatorMetadata : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *dynamicEvaluatorTaskName;
@property (nonatomic) BOOL hasDynamicEvaluatorTaskName;
@property (copy, nonatomic) NSString *promptVersion;
@property (nonatomic) BOOL hasPromptVersion;
@property (copy, nonatomic) NSString *promptIdentifier;
@property (nonatomic) BOOL hasPromptIdentifier;
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
- (void)deleteDynamicEvaluatorTaskName;
- (void)deletePromptIdentifier;
- (void)deletePromptVersion;

@end
