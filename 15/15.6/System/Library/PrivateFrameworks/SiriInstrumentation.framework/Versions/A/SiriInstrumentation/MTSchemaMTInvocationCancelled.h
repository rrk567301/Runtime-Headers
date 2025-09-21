@class MTSchemaMTLocalePair, NSData, SISchemaUUID;

@interface MTSchemaMTInvocationCancelled : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
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
- (void)deleteExists;
- (void)deleteLocalePair;
- (void)deleteQssSessionId;
- (id)suppressMessageUnderConditions;

@end
