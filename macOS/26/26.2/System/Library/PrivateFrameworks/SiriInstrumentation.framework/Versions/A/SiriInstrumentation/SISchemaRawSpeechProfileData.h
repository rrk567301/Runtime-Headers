@class NSData;

@interface SISchemaRawSpeechProfileData : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSData *r;
@property (nonatomic) BOOL hasR;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteR;

@end
