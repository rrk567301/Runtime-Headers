@class NSString, NSData;

@interface LCServiceBlackListedField : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *fullyQualifiedPath;
@property (nonatomic) BOOL hasFullyQualifiedPath;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFullyQualifiedPath;

@end
