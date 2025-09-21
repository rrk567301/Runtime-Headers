@class NLXSchemaCDMTurnInput, NSString, NSData;

@interface NLXSchemaCDMRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char serviceGraphName : 1; } _has;
}

@property (retain, nonatomic) NLXSchemaCDMTurnInput *currentTurnInput;
@property (nonatomic) char hasCurrentTurnInput;
@property (nonatomic) int serviceGraphName;
@property (nonatomic) char hasServiceGraphName;
@property (copy, nonatomic) NSString *loggableSharedUserId;
@property (nonatomic) char hasLoggableSharedUserId;
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
- (void)deleteCurrentTurnInput;
- (void)deleteLoggableSharedUserId;
- (void)deleteServiceGraphName;
- (id)suppressMessageUnderConditions;

@end
