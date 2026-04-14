@class NSArray, NSData;

@interface GRRSchemaGRRStringList : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *stringNames;
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
- (unsigned long long)stringNameCount;
- (void)clearStringName;
- (void)addStringName:(id)a0;
- (void)deleteStringName;
- (id)stringNameAtIndex:(unsigned long long)a0;

@end
