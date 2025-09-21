@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaCDMTokenizationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char inputType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) char hasContextId;
@property (copy, nonatomic) NSArray *tokenChains;
@property (nonatomic) int inputType;
@property (nonatomic) char hasInputType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteInputType;
- (void)addTokenChains:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteContextId;
- (void)clearTokenChains;
- (void)deleteTokenChains;
- (id)suppressMessageUnderConditions;
- (id)tokenChainsAtIndex:(unsigned long long)a0;
- (unsigned long long)tokenChainsCount;

@end
