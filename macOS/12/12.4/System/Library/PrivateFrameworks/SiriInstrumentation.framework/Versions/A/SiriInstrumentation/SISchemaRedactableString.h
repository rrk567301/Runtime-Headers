@class NSString, NSData;

@interface SISchemaRedactableString : SISchemaInstrumentationMessage

@property (nonatomic) int redactionState;
@property (nonatomic) BOOL hasRedactionState;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) BOOL hasValue;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long which_String;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteValue;
- (void)deleteRedactionState;
- (id)suppressMessageUnderConditions;

@end
