@class NLXSchemaCDMTurnInput, NSString, NSData;

@interface NLXSchemaCDMRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char serviceGraphName : 1; } _has;
}

@property (retain, nonatomic) NLXSchemaCDMTurnInput *currentTurnInput;
@property (nonatomic) BOOL hasCurrentTurnInput;
@property (nonatomic) int serviceGraphName;
@property (nonatomic) BOOL hasServiceGraphName;
@property (copy, nonatomic) NSString *loggableSharedUserId;
@property (nonatomic) BOOL hasLoggableSharedUserId;
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
- (void)deleteCurrentTurnInput;
- (void)deleteLoggableSharedUserId;
- (void)deleteServiceGraphName;

@end
