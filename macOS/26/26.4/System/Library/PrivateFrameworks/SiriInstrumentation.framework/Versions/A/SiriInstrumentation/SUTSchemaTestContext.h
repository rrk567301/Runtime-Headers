@class NSString, NSData, SUTSchemaTestSessionInfo;

@interface SUTSchemaTestContext : SISchemaInstrumentationMessage {
    struct { unsigned char testType : 1; } _has;
}

@property (copy, nonatomic) NSString *testName;
@property (nonatomic) BOOL hasTestName;
@property (nonatomic) int testType;
@property (nonatomic) BOOL hasTestType;
@property (retain, nonatomic) SUTSchemaTestSessionInfo *testSessionInfo;
@property (nonatomic) BOOL hasTestSessionInfo;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTestName;
- (void)deleteTestSessionInfo;
- (void)deleteTestType;

@end
