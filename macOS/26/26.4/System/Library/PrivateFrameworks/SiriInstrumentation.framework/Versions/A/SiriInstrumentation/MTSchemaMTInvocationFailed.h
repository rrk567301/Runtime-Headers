@class MTSchemaMTError, MTSchemaMTLocalePair, SISchemaUUID, NSData;

@interface MTSchemaMTInvocationFailed : SISchemaInstrumentationMessage

@property (retain, nonatomic) MTSchemaMTError *error;
@property (nonatomic) BOOL hasError;
@property (retain, nonatomic) SISchemaUUID *qssSessionId;
@property (nonatomic) BOOL hasQssSessionId;
@property (retain, nonatomic) MTSchemaMTLocalePair *localePair;
@property (nonatomic) BOOL hasLocalePair;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteError;
- (void)deleteLocalePair;
- (void)deleteQssSessionId;

@end
