@class NSString, NSData, POMMESSchemaPOMMESRequestResult;

@interface POMMESSchemaPOMMESRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char isHandledByPreflight : 1; } _has;
}

@property (nonatomic) BOOL isHandledByPreflight;
@property (nonatomic) BOOL hasIsHandledByPreflight;
@property (retain, nonatomic) POMMESSchemaPOMMESRequestResult *result;
@property (nonatomic) BOOL hasResult;
@property (copy, nonatomic) NSString *preflightClientHandlerIdentifier;
@property (nonatomic) BOOL hasPreflightClientHandlerIdentifier;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteIsHandledByPreflight;
- (void)deletePreflightClientHandlerIdentifier;
- (void)deleteResult;
- (id)suppressMessageUnderConditions;

@end
