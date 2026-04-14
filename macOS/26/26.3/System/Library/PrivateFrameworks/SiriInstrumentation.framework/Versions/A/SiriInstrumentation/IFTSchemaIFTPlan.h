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

- (void)deleteExists;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)clearStatements;
- (unsigned long long)statementsCount;
- (void)addStatements:(id)a0;
- (void)deleteOverrideId;
- (void)deletePlanSource;
- (void)deleteStatements;
- (id)statementsAtIndex:(unsigned long long)a0;

@end
