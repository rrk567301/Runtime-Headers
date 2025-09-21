@class SUTSchemaTestExecutionMetadata, SUTSchemaTestExecutionBegin, SISchemaInstrumentationMessage, SUTSchemaTestExecutionEnd, SUTSchemaTestOutcomeRecorded, SUTSchemaTestAssociatedSchemaIdentifier, NSData;

@interface SUTSchemaTestExecutionEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SUTSchemaTestExecutionMetadata *metadata;
@property (nonatomic) char hasMetadata;
@property (retain, nonatomic) SUTSchemaTestExecutionBegin *testExecutionBegin;
@property (nonatomic) char hasTestExecutionBegin;
@property (retain, nonatomic) SUTSchemaTestExecutionEnd *testExecutionEnd;
@property (nonatomic) char hasTestExecutionEnd;
@property (retain, nonatomic) SUTSchemaTestAssociatedSchemaIdentifier *testAssociatedSchemaIdentifier;
@property (nonatomic) char hasTestAssociatedSchemaIdentifier;
@property (retain, nonatomic) SUTSchemaTestOutcomeRecorded *testOutcomeRecorded;
@property (nonatomic) char hasTestOutcomeRecorded;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteMetadata;
- (void)deleteTestAssociatedSchemaIdentifier;
- (void)deleteTestExecutionBegin;
- (void)deleteTestExecutionEnd;
- (void)deleteTestOutcomeRecorded;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
