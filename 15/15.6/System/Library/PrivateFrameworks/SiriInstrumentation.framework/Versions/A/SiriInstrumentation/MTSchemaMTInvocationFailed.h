@class MTSchemaMTError, MTSchemaMTLocalePair, SISchemaUUID, NSData;

@interface MTSchemaMTInvocationFailed : SISchemaInstrumentationMessage

@property (retain, nonatomic) MTSchemaMTError *error;
@property (nonatomic) char hasError;
@property (retain, nonatomic) SISchemaUUID *qssSessionId;
@property (nonatomic) char hasQssSessionId;
@property (retain, nonatomic) MTSchemaMTLocalePair *localePair;
@property (nonatomic) char hasLocalePair;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteError;
- (void)deleteLocalePair;
- (void)deleteQssSessionId;
- (id)suppressMessageUnderConditions;

@end
