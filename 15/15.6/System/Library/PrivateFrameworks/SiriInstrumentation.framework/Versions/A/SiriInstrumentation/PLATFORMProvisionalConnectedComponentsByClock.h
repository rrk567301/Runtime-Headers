@class NSArray, NSData;

@interface PLATFORMProvisionalConnectedComponentsByClock : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *connectedComponents;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addConnectedComponents:(id)a0;
- (void)clearConnectedComponents;
- (id)connectedComponentsAtIndex:(unsigned long long)a0;
- (unsigned long long)connectedComponentsCount;
- (void)deleteConnectedComponents;

@end
