@class SUTSchemaTestExecutionMetadata, SUTSchemaTestExecutionBegin, SISchemaInstrumentationMessage, SUTSchemaTestExecutionEnd, SUTSchemaTestOutcomeRecorded, SUTSchemaTestAssociatedSchemaIdentifier, NSData;

@interface SUTSchemaTestExecutionEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SUTSchemaTestExecutionMetadata *metadata;
@property (nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) SUTSchemaTestExecutionBegin *testExecutionBegin;
@property (nonatomic) BOOL hasTestExecutionBegin;
@property (retain, nonatomic) SUTSchemaTestExecutionEnd *testExecutionEnd;
@property (nonatomic) BOOL hasTestExecutionEnd;
@property (retain, nonatomic) SUTSchemaTestAssociatedSchemaIdentifier *testAssociatedSchemaIdentifier;
@property (nonatomic) BOOL hasTestAssociatedSchemaIdentifier;
@property (retain, nonatomic) SUTSchemaTestOutcomeRecorded *testOutcomeRecorded;
@property (nonatomic) BOOL hasTestOutcomeRecorded;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (int)componentName;
- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)qualifiedMessageName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteMetadata;
- (void)deleteTestAssociatedSchemaIdentifier;
- (void)deleteTestExecutionBegin;
- (void)deleteTestExecutionEnd;
- (void)deleteTestOutcomeRecorded;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
