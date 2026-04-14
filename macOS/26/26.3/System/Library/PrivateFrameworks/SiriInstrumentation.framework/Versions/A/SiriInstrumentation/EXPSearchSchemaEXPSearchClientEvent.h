@class EXPSearchSchemaEXPSearchSessionExperiments, NSData, SISchemaInstrumentationMessage;

@interface EXPSearchSchemaEXPSearchClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) EXPSearchSchemaEXPSearchSessionExperiments *sessionExperiments;
@property (nonatomic) BOOL hasSessionExperiments;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

- (id)qualifiedMessageName;
- (int)getAnyEventType;
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
- (void)deleteSessionExperiments;
- (unsigned long long)whichInnerEventType;

@end
