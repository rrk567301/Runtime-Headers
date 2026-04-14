@class NSArray, NSData;

@interface JRSchemaJRAction : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (unsigned long long)actionsCount;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (void)clearActions;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addActions:(unsigned int)a0;
- (unsigned int)actionsAtIndex:(unsigned long long)a0;
- (void)deleteActions;

@end
