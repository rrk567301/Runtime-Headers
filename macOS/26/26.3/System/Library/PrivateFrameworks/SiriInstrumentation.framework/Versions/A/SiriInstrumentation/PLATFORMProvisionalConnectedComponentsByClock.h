@class NSArray, NSData;

@interface PLATFORMProvisionalConnectedComponentsByClock : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *connectedComponents;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addConnectedComponents:(id)a0;
- (void)clearConnectedComponents;
- (id)connectedComponentsAtIndex:(unsigned long long)a0;
- (unsigned long long)connectedComponentsCount;
- (void)deleteConnectedComponents;

@end
