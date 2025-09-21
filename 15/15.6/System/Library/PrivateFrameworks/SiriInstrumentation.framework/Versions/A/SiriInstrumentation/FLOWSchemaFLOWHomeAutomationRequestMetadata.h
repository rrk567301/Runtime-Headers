@class NSArray, NSString, NSData;

@interface FLOWSchemaFLOWHomeAutomationRequestMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char isHomeAutomationRequestAsynchronous : 1; unsigned char targetedEntityCount : 1; unsigned char fulfilledEntityCount : 1; unsigned char smallestTargetedContainer : 1; unsigned char conditionType : 1; unsigned char isRecurring : 1; unsigned char isIntentSelectionCacheHit : 1; } _has;
}

@property (nonatomic) char isHomeAutomationRequestAsynchronous;
@property (nonatomic) char hasIsHomeAutomationRequestAsynchronous;
@property (nonatomic) unsigned int targetedEntityCount;
@property (nonatomic) char hasTargetedEntityCount;
@property (nonatomic) unsigned int fulfilledEntityCount;
@property (nonatomic) char hasFulfilledEntityCount;
@property (copy, nonatomic) NSArray *targetedEntityTypes;
@property (nonatomic) int smallestTargetedContainer;
@property (nonatomic) char hasSmallestTargetedContainer;
@property (copy, nonatomic) NSString *targetAttribute;
@property (nonatomic) char hasTargetAttribute;
@property (nonatomic) int conditionType;
@property (nonatomic) char hasConditionType;
@property (nonatomic) char isRecurring;
@property (nonatomic) char hasIsRecurring;
@property (nonatomic) char isIntentSelectionCacheHit;
@property (nonatomic) char hasIsIntentSelectionCacheHit;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsIntentSelectionCacheHit;
- (void)deleteSmallestTargetedContainer;
- (void)addTargetedEntityTypes:(id)a0;
- (void)clearTargetedEntityTypes;
- (void)deleteConditionType;
- (void)deleteFulfilledEntityCount;
- (void)deleteIsHomeAutomationRequestAsynchronous;
- (void)deleteIsRecurring;
- (void)deleteTargetAttribute;
- (void)deleteTargetedEntityCount;
- (void)deleteTargetedEntityTypes;
- (id)suppressMessageUnderConditions;
- (id)targetedEntityTypesAtIndex:(unsigned long long)a0;
- (unsigned long long)targetedEntityTypesCount;

@end
