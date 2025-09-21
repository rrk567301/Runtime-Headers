@class NSData, SISchemaInstrumentationMessage, DIMSchemaDIMOnDeviceDigest, DIMSchemaDIMSiriAccountInformation, DIMSchemaDIMExperimentContext, DIMSchemaDIMEphemeralToAggregationIdentifierMap, DIMSchemaDIMDeviceFixedContext, DIMSchemaDIMLocaleNotRecognized, DIMSchemaDIMEphemeralIdentifiers;

@interface DIMSchemaDIMClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) DIMSchemaDIMDeviceFixedContext *deviceFixedContext;
@property (nonatomic) char hasDeviceFixedContext;
@property (retain, nonatomic) DIMSchemaDIMSiriAccountInformation *siriAccountInformation;
@property (nonatomic) char hasSiriAccountInformation;
@property (retain, nonatomic) DIMSchemaDIMLocaleNotRecognized *localeNotRecognized;
@property (nonatomic) char hasLocaleNotRecognized;
@property (retain, nonatomic) DIMSchemaDIMOnDeviceDigest *onDeviceDigest;
@property (nonatomic) char hasOnDeviceDigest;
@property (retain, nonatomic) DIMSchemaDIMEphemeralIdentifiers *ephemeralIdentifiers;
@property (nonatomic) char hasEphemeralIdentifiers;
@property (retain, nonatomic) DIMSchemaDIMEphemeralToAggregationIdentifierMap *ephemeralToAggregationIdentifierMap;
@property (nonatomic) char hasEphemeralToAggregationIdentifierMap;
@property (retain, nonatomic) DIMSchemaDIMExperimentContext *experimentContext;
@property (nonatomic) char hasExperimentContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteDeviceFixedContext;
- (void)deleteEphemeralIdentifiers;
- (void)deleteEphemeralToAggregationIdentifierMap;
- (void)deleteExperimentContext;
- (void)deleteLocaleNotRecognized;
- (void)deleteOnDeviceDigest;
- (void)deleteSiriAccountInformation;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
