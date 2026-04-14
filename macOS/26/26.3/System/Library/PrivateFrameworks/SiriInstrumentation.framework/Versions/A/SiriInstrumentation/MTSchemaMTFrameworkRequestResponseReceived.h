@class NSData, SISchemaUUID;

@interface MTSchemaMTFrameworkRequestResponseReceived : SISchemaInstrumentationMessage {
    struct { unsigned char requestRoute : 1; unsigned char numSentences : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *frameworkRequestId;
@property (nonatomic) BOOL hasFrameworkRequestId;
@property (nonatomic) int requestRoute;
@property (nonatomic) BOOL hasRequestRoute;
@property (nonatomic) unsigned int numSentences;
@property (nonatomic) BOOL hasNumSentences;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteFrameworkRequestId;
- (void)deleteNumSentences;
- (void)deleteRequestRoute;

@end
