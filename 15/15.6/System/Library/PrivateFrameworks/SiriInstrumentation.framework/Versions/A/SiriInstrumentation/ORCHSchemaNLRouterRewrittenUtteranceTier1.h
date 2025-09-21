@class NSString, NSData, SISchemaUUID;

@interface ORCHSchemaNLRouterRewrittenUtteranceTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char utteranceIndex : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) char hasSubRequestId;
@property (copy, nonatomic) NSString *utteranceText;
@property (nonatomic) char hasUtteranceText;
@property (nonatomic) int utteranceIndex;
@property (nonatomic) char hasUtteranceIndex;
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
- (void)deleteSubRequestId;
- (void)deleteUtteranceIndex;
- (void)deleteUtteranceText;
- (id)suppressMessageUnderConditions;

@end
