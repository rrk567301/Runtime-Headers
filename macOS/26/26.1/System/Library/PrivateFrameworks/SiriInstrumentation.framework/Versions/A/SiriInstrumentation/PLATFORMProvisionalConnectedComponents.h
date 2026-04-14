@class NSArray, NSData, PLATFORMProvisionalConnectecedComponentIdentifier;

@interface PLATFORMProvisionalConnectedComponents : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *componentIds;
@property (retain, nonatomic) PLATFORMProvisionalConnectecedComponentIdentifier *representativeId;
@property (nonatomic) BOOL hasRepresentativeId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addComponentIds:(id)a0;
- (void)clearComponentIds;
- (id)componentIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)componentIdsCount;
- (void)deleteComponentIds;
- (void)deleteRepresentativeId;

@end
