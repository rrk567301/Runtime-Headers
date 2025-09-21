@class NSString, NSData, POMMESSchemaPOMMESRequestResult;

@interface POMMESSchemaPOMMESRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char isHandledByPreflight : 1; unsigned char pommesSearchReason : 1; } _has;
}

@property (nonatomic) char isHandledByPreflight;
@property (nonatomic) char hasIsHandledByPreflight;
@property (retain, nonatomic) POMMESSchemaPOMMESRequestResult *result;
@property (nonatomic) char hasResult;
@property (copy, nonatomic) NSString *preflightClientHandlerIdentifier;
@property (nonatomic) char hasPreflightClientHandlerIdentifier;
@property (nonatomic) unsigned int pommesSearchReason;
@property (nonatomic) char hasPommesSearchReason;
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
- (void)deleteIsHandledByPreflight;
- (void)deletePommesSearchReason;
- (void)deletePreflightClientHandlerIdentifier;
- (void)deleteResult;
- (id)suppressMessageUnderConditions;

@end
