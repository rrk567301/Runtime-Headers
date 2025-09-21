@class NSString, NSData;

@interface LCServiceBlackListedField : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *fullyQualifiedPath;
@property (nonatomic) char hasFullyQualifiedPath;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFullyQualifiedPath;
- (id)suppressMessageUnderConditions;

@end
