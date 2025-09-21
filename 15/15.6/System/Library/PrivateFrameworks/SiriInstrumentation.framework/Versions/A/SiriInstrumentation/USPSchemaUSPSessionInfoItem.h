@class NSString, NSData;

@interface USPSchemaUSPSessionInfoItem : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasName;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) char hasValue;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteName;
- (void)deleteValue;
- (id)suppressMessageUnderConditions;

@end
