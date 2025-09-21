@class NSString, NSData, SUTSchemaTestSessionInfo;

@interface SUTSchemaTestContext : SISchemaInstrumentationMessage {
    struct { unsigned char testType : 1; } _has;
}

@property (copy, nonatomic) NSString *testName;
@property (nonatomic) char hasTestName;
@property (nonatomic) int testType;
@property (nonatomic) char hasTestType;
@property (retain, nonatomic) SUTSchemaTestSessionInfo *testSessionInfo;
@property (nonatomic) char hasTestSessionInfo;
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
- (void)deleteTestName;
- (void)deleteTestSessionInfo;
- (void)deleteTestType;
- (id)suppressMessageUnderConditions;

@end
