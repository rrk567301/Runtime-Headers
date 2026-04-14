@class NSString, NSData;

@interface POMMESSchemaPOMMESPegasusSearchQueryUserSpan : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL hasLabel;
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
- (void)deleteLabel;

@end
