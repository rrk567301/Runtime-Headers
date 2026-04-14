@class NSArray, NSData;

@interface GRRSchemaGRRStringList : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *stringNames;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearStringName;
- (unsigned long long)stringNameCount;
- (void)addStringName:(id)a0;
- (void)deleteStringName;
- (id)stringNameAtIndex:(unsigned long long)a0;

@end
