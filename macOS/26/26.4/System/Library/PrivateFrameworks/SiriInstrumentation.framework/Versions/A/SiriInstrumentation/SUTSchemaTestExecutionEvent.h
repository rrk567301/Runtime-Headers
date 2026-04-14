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

- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)componentName;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMetadata;
- (void)deleteTestAssociatedSchemaIdentifier;
- (void)deleteTestExecutionBegin;
- (void)deleteTestExecutionEnd;
- (void)deleteTestOutcomeRecorded;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
