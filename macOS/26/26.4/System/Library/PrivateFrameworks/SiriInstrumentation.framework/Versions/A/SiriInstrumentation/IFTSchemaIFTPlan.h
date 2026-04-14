@class NSArray, NSString, NSData;

@interface IFTSchemaIFTPlan : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char planSource : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (copy, nonatomic) NSArray *statements;
@property (copy, nonatomic) NSString *overrideId;
@property (nonatomic) BOOL hasOverrideId;
@property (nonatomic) int planSource;
@property (nonatomic) BOOL hasPlanSource;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (void)deleteExists;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)statementsCount;
- (void)clearStatements;
- (void)addStatements:(id)a0;
- (void)deleteOverrideId;
- (void)deletePlanSource;
- (void)deleteStatements;
- (id)statementsAtIndex:(unsigned long long)a0;

@end
