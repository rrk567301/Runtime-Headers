@class NSArray, NSData;

@interface GRRSchemaGRRStringList : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *stringNames;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addStringName:(id)a0;
- (void)clearStringName;
- (unsigned long long)stringNameCount;
- (id)stringNameAtIndex:(unsigned long long)a0;

@end
