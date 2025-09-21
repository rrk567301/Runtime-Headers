@class NSData, SISchemaUUID;

@interface MTSchemaMTFrameworkRequestResponseReceived : SISchemaInstrumentationMessage {
    struct { unsigned char requestRoute : 1; unsigned char numSentences : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *frameworkRequestId;
@property (nonatomic) char hasFrameworkRequestId;
@property (nonatomic) int requestRoute;
@property (nonatomic) char hasRequestRoute;
@property (nonatomic) unsigned int numSentences;
@property (nonatomic) char hasNumSentences;
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
- (void)deleteFrameworkRequestId;
- (void)deleteNumSentences;
- (void)deleteRequestRoute;
- (id)suppressMessageUnderConditions;

@end
