@class NSString, NSData;

@interface POMMESSchemaPOMMESPegasusSearchQueryUserSpan : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL hasLabel;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteLabel;

@end
