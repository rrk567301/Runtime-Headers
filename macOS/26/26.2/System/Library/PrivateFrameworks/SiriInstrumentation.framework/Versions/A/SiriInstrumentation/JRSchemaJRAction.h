@class NSArray, NSData;

@interface JRSchemaJRAction : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (unsigned long long)actionsCount;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearActions;
- (id)dictionaryRepresentation;
- (void)addActions:(unsigned int)a0;
- (unsigned int)actionsAtIndex:(unsigned long long)a0;
- (void)deleteActions;

@end
