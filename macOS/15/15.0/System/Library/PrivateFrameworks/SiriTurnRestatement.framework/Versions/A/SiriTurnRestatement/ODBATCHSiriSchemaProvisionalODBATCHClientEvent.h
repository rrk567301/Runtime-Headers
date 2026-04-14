@class NSData, ODBATCHSiriSchemaProvisionalODBATCHTurnRestatementScoresReported;

@interface ODBATCHSiriSchemaProvisionalODBATCHClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) ODBATCHSiriSchemaProvisionalODBATCHTurnRestatementScoresReported *turnRestatementScoresReported;
@property (nonatomic) BOOL hasTurnRestatementScoresReported;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)getVersion;
- (id)initWithJSON:(id)a0;
- (BOOL)isProvisional;
- (int)getAnyEventType;
- (void)deleteTurnRestatementScoresReported;
- (id)getTypeId;
- (id)qualifiedMessageName;

@end
