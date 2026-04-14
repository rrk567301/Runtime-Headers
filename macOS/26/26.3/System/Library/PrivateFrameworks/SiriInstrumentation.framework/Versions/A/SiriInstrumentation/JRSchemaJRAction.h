@class NSArray, NSData;

@interface JRSchemaJRAction : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (void)clearActions;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)actionsCount;
- (unsigned long long)hash;
- (void)addActions:(unsigned int)a0;
- (unsigned int)actionsAtIndex:(unsigned long long)a0;
- (void)deleteActions;

@end
