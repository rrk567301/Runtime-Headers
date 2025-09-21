@class NSString, NSData;

@interface SISchemaRedactableString : SISchemaInstrumentationMessage

@property (nonatomic) int redactionState;
@property (nonatomic) char hasRedactionState;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) char hasValue;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long which_String;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRedactionState;
- (void)deleteValue;
- (id)suppressMessageUnderConditions;

@end
