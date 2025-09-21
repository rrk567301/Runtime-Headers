@class ODDSiriSchemaODDiOSResponseProperties, NSData, NSArray, ODDSiriSchemaODDSiriInCallProperties, ODDSiriSchemaODDiOSAccessibilityProperties, ODDSiriSchemaODDAutoSendMessageProperties, ODDSiriSchemaODDAnnounceProperties, ODDSiriSchemaODDCarPlayProperties, ODDSiriSchemaODDHeadGestureProperties;

@interface ODDSiriSchemaODDiOSAssistantProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isPressSideButtonForSiriEnabled : 1; unsigned char isAllowSiriWhenLockedEnabled : 1; } _has;
}

@property (nonatomic) char isPressSideButtonForSiriEnabled;
@property (nonatomic) char hasIsPressSideButtonForSiriEnabled;
@property (nonatomic) char isAllowSiriWhenLockedEnabled;
@property (nonatomic) char hasIsAllowSiriWhenLockedEnabled;
@property (retain, nonatomic) ODDSiriSchemaODDiOSResponseProperties *response;
@property (nonatomic) char hasResponse;
@property (retain, nonatomic) ODDSiriSchemaODDiOSAccessibilityProperties *accessibility;
@property (nonatomic) char hasAccessibility;
@property (retain, nonatomic) ODDSiriSchemaODDCarPlayProperties *carPlay;
@property (nonatomic) char hasCarPlay;
@property (retain, nonatomic) ODDSiriSchemaODDSiriInCallProperties *siriInCall;
@property (nonatomic) char hasSiriInCall;
@property (retain, nonatomic) ODDSiriSchemaODDAnnounceProperties *announce;
@property (nonatomic) char hasAnnounce;
@property (retain, nonatomic) ODDSiriSchemaODDAutoSendMessageProperties *autoSendMessage;
@property (nonatomic) char hasAutoSendMessage;
@property (copy, nonatomic) NSArray *activeSubscriptions;
@property (retain, nonatomic) ODDSiriSchemaODDHeadGestureProperties *headGestures;
@property (nonatomic) char hasHeadGestures;
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
- (int)activeSubscriptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)activeSubscriptionsCount;
- (void)addActiveSubscriptions:(int)a0;
- (void)clearActiveSubscriptions;
- (void)deleteAccessibility;
- (void)deleteActiveSubscriptions;
- (void)deleteAnnounce;
- (void)deleteAutoSendMessage;
- (void)deleteCarPlay;
- (void)deleteHeadGestures;
- (void)deleteIsAllowSiriWhenLockedEnabled;
- (void)deleteIsPressSideButtonForSiriEnabled;
- (void)deleteResponse;
- (void)deleteSiriInCall;
- (id)suppressMessageUnderConditions;

@end
