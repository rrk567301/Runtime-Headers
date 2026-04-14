@class NSData, SISchemaInstrumentationMessage, DIMSchemaDIMOnDeviceDigest, DIMSchemaDIMSiriAccountInformation, DIMSchemaDIMExperimentContext, DIMSchemaDIMEphemeralToAggregationIdentifierMap, DIMSchemaDIMDeviceFixedContext, DIMSchemaDIMLocaleNotRecognized, DIMSchemaDIMEphemeralIdentifiers;

@interface DIMSchemaDIMClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) DIMSchemaDIMDeviceFixedContext *deviceFixedContext;
@property (nonatomic) BOOL hasDeviceFixedContext;
@property (retain, nonatomic) DIMSchemaDIMSiriAccountInformation *siriAccountInformation;
@property (nonatomic) BOOL hasSiriAccountInformation;
@property (retain, nonatomic) DIMSchemaDIMLocaleNotRecognized *localeNotRecognized;
@property (nonatomic) BOOL hasLocaleNotRecognized;
@property (retain, nonatomic) DIMSchemaDIMOnDeviceDigest *onDeviceDigest;
@property (nonatomic) BOOL hasOnDeviceDigest;
@property (retain, nonatomic) DIMSchemaDIMEphemeralIdentifiers *ephemeralIdentifiers;
@property (nonatomic) BOOL hasEphemeralIdentifiers;
@property (retain, nonatomic) DIMSchemaDIMEphemeralToAggregationIdentifierMap *ephemeralToAggregationIdentifierMap;
@property (nonatomic) BOOL hasEphemeralToAggregationIdentifierMap;
@property (retain, nonatomic) DIMSchemaDIMExperimentContext *experimentContext;
@property (nonatomic) BOOL hasExperimentContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDeviceFixedContext;
- (void)deleteEphemeralIdentifiers;
- (void)deleteEphemeralToAggregationIdentifierMap;
- (void)deleteExperimentContext;
- (void)deleteLocaleNotRecognized;
- (void)deleteOnDeviceDigest;
- (void)deleteSiriAccountInformation;
- (unsigned long long)whichInnerEventType;

@end
