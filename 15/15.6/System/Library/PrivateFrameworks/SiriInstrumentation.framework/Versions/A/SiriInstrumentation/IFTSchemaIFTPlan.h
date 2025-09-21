@class NSArray, NSString, NSData;

@interface IFTSchemaIFTPlan : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char planSource : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
@property (copy, nonatomic) NSArray *statements;
@property (copy, nonatomic) NSString *overrideId;
@property (nonatomic) char hasOverrideId;
@property (nonatomic) int planSource;
@property (nonatomic) char hasPlanSource;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)statementsCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearStatements;
- (void)addStatements:(id)a0;
- (void)deleteExists;
- (void)deleteOverrideId;
- (void)deletePlanSource;
- (void)deleteStatements;
- (id)statementsAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;

@end
