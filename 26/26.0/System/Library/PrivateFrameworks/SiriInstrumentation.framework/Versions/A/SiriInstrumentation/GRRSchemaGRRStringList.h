@class NSArray, NSData;

@interface GRRSchemaGRRStringList : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *stringNames;
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
- (void)clearStringName;
- (unsigned long long)stringNameCount;
- (void)addStringName:(id)a0;
- (void)deleteStringName;
- (id)stringNameAtIndex:(unsigned long long)a0;

@end
