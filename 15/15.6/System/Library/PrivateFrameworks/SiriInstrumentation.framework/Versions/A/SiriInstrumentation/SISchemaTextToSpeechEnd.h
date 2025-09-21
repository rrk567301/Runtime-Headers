@class NSString, NSData;

@interface SISchemaTextToSpeechEnd : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *aceID;
@property (nonatomic) char hasAceID;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAceID;
- (id)suppressMessageUnderConditions;

@end
