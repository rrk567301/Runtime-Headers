@class NSArray, NSData, SISchemaUUID;

@interface SISchemaLinkedAccessoryState : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *accessoryId;
@property (nonatomic) BOOL hasAccessoryId;
@property (copy, nonatomic) NSArray *gradingOptInStateChanges;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)addGradingOptInStateChanges:(id)a0;
- (void)clearGradingOptInStateChanges;
- (void)deleteAccessoryId;
- (void)deleteGradingOptInStateChanges;
- (id)gradingOptInStateChangesAtIndex:(unsigned long long)a0;
- (unsigned long long)gradingOptInStateChangesCount;

@end
